/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcissoko <hcissoko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/03 17:32:30 by hcissoko          #+#    #+#             */
/*   Updated: 2026/09/03 17:55:16 by hcissoko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(std::string type)
{
	this->type_ = type;
    std::cout << "WrongAnimal of type " << this->type_ << " created ";
}

WrongAnimal::WrongAnimal()
{
	this->type_ = "No type defined";
    std::cout << "Default WrongAnimal created" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& src) : type_(src.type_)
{
    std::cout << "WrongAnimal " << src.type_ << " copied" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& rhs)
{
    if (this != &rhs)
    {
        this->type_ = rhs.type_;
        std::cout << "WrongAnimal " << rhs.type_ << " assigned" << std::endl;
    }
    return *this;
}

WrongAnimal::~WrongAnimal(void)
{
    std::cout << "WrongAnimal " << this->type_ << " destroyed" << std::endl;
}

void WrongAnimal::makeSound() const
{
	std::cout << "Sound undefined\n";
}

std::string WrongAnimal::getType() const
{
    return this->type_;
}