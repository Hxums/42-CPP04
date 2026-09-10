/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcissoko <hcissoko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/03 17:27:35 by hcissoko          #+#    #+#             */
/*   Updated: 2026/09/09 19:47:24 by hcissoko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* animals[100];
	for (int i = 0; i < 100; i++)
	{
		(animals[i]) = new Cat();
		// std::cout << "Cat " << i << " created\n";
		(animals[++i]) = new Dog();
		// std::cout << "Dog " << i << " created\n";
	}
	// delete[] animals;
	for (int i = 0; i < 100; i++)
		delete animals[i];
}