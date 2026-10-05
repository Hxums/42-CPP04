/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcissoko <hcissoko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/03 17:27:35 by hcissoko          #+#    #+#             */
/*   Updated: 2026/10/05 20:01:02 by hcissoko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const WrongAnimal* h = new WrongCat();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << h->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout << j->getType() << " " << std::endl;
	h->makeSound();
	i->makeSound();
	j->makeSound();
	meta->makeSound();
	delete meta;
	delete h;
	delete i;
	delete j;
	return 0;
}