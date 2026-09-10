/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcissoko <hcissoko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/03 17:38:34 by hcissoko          #+#    #+#             */
/*   Updated: 2026/09/09 19:34:21 by hcissoko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "Dog.hpp"

Dog::Dog() : Animal()
{
	this->type_ = "Dog";
    std::cout << "Dog created" << std::endl;
}

Dog::Dog(const Dog& src) : Animal(src)
{
    std::cout << "Dog copied" << std::endl;
}

Dog& Dog::operator=(const Dog& rhs)
{
    if (this != &rhs)
    {
        this->type_ = rhs.type_;
        std::cout << "Dog assigned" << std::endl;
    }
    return *this;
}

Dog::~Dog(void)
{
    std::cout << "Dog destroyed" << std::endl;
}

void Dog::makeSound() const
{
	std::cout << "Bark\n";
}