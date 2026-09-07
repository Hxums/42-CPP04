/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcissoko <hcissoko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/03 17:38:34 by hcissoko          #+#    #+#             */
/*   Updated: 2026/09/03 17:55:31 by hcissoko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "Dog.hpp"


Dog::Dog(std::string type) : Animal(type)
{
	this->type_ = type;
    std::cout << "Dog of type " << this->type_ << " created ";
}

Dog::Dog() : Animal()
{
	this->type_ = "No type defined";
    std::cout << "Default Dog created" << std::endl;
}

Dog::Dog(const Dog& src) : Animal(src)
{
    std::cout << "Dog " << src.type_ << " copied" << std::endl;
}

Dog& Dog::operator=(const Dog& rhs)
{
    if (this != &rhs)
    {
        this->type_ = rhs.type_;
        std::cout << "Dog " << rhs.type_ << " assigned" << std::endl;
    }
    return *this;
}

Dog::~Dog(void)
{
    std::cout << "Dog " << this->type_ << " destroyed" << std::endl;
}

void Dog::makeSound() const
{
	std::cout << "Bark\n";
}