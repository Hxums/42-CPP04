/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcissoko <hcissoko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/03 17:38:34 by hcissoko          #+#    #+#             */
/*   Updated: 2026/10/05 17:56:16 by hcissoko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
    this->brain_ = new Brain();
    std::cout << "Dog created" << std::endl;
}

Dog::Dog(const Dog& src) : Animal(src)
{
    this->brain_ = new Brain();
    *this->brain_ = *src.brain_;
    std::cout << "Dog copied" << std::endl;
}

Dog& Dog::operator=(const Dog& rhs)
{
    if (this != &rhs)
    {
        *this->brain_= *rhs.brain_;
        Animal::operator=(rhs);
        std::cout << "Dog assigned" << std::endl;
    }
    return *this;
}

Dog::~Dog(void)
{
    delete this->brain_;
    std::cout << "Dog destroyed" << std::endl;
}

void Dog::makeSound() const
{
	std::cout << "Bark\n";
}

Brain* Dog::getBrain()
{
    return this->brain_;
}