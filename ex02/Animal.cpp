/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcissoko <hcissoko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/03 17:32:30 by hcissoko          #+#    #+#             */
/*   Updated: 2026/10/03 22:49:08 by hcissoko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "Animal.hpp"

Animal::Animal(std::string type)
{
	this->type_ = type;
    std::cout << "Animal of type " << this->type_ << " created " << std::endl;
}

Animal::Animal()
{
	this->type_ = "No type defined";
    std::cout << "Default Animal created" << std::endl;
}

Animal::Animal(const Animal& src) : type_(src.type_)
{
    std::cout << "Animal " << src.type_ << " copied" << std::endl;
}

Animal& Animal::operator=(const Animal& rhs)
{
    if (this != &rhs)
    {
        this->type_ = rhs.type_;
        std::cout << "Animal " << rhs.type_ << " assigned" << std::endl;
    }
    return *this;
}

Animal::~Animal(void)
{
    std::cout << "Animal " << this->type_ << " destroyed" << std::endl;
}

void Animal::makeSound() const
{
	std::cout << "Sound undefined\n";
}

std::string Animal::getType() const
{
    return this->type_;
}