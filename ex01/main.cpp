/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcissoko <hcissoko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/03 17:27:35 by hcissoko          #+#    #+#             */
/*   Updated: 2026/10/05 19:36:19 by hcissoko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	std::cout << "---------------------------- Animals array ----------------------------\n";
	Animal* animals[4];
	for (int i = 0; i < 4; i++)
	{
		(animals[i]) = new Cat();
		(animals[++i]) = new Dog();
	}
	for (int i = 0; i < 4; i++)
		delete animals[i];
	std::cout << "---------------------------- Deep copy : copy construct ----------------------------\n";
	Dog*	d1 = new Dog();
	d1->getBrain()->setIdea(0, "First Idea");
	Dog	copy(*d1);
	d1->getBrain()->setIdea(0, "New Idea");
	std::cout << "Idea of d1 : " << d1->getBrain()->getIdea(0) << std::endl;
	std::cout << "Idea of copy : " << copy.getBrain()->getIdea(0) << std::endl;
	
	std::cout << "---------------------------- Deep copy : operator = ----------------------------\n";
	Dog*	d2 = new Dog();
	d1->getBrain()->setIdea(0, "First Idea");
	d2->getBrain()->setIdea(0, "Second Idea");
	*d2 = *d1;
	d1->getBrain()->setIdea(0, "New Idea");
	std::cout << "Idea of d1 : " << d1->getBrain()->getIdea(0) << std::endl;
	std::cout << "Idea of d2 : " << d2->getBrain()->getIdea(0) << std::endl;
	delete d2;
	delete d1;

	return 0;
}