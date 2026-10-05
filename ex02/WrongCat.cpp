/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcissoko <hcissoko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/03 17:38:34 by hcissoko          #+#    #+#             */
/*   Updated: 2026/09/08 16:40:05 by hcissoko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "WrongCat.hpp"


WrongCat::WrongCat(std::string type) : WrongAnimal(type)
{
	this->type_ = type;
    std::cout << "WrongCat of type " << this->type_ << " created " << std::endl;
}

WrongCat::WrongCat() : WrongAnimal()
{
	this->type_ = "No type defined";
    std::cout << "Default WrongCat created" << std::endl;
}

WrongCat::WrongCat(const WrongCat& src) : WrongAnimal(src)
{
    std::cout << "WrongCat " << src.type_ << " copied" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& rhs)
{
    if (this != &rhs)
    {
        this->type_ = rhs.type_;
        std::cout << "WrongCat " << rhs.type_ << " assigned" << std::endl;
    }
    return *this;
}

WrongCat::~WrongCat(void)
{
    std::cout << "WrongCat " << this->type_ << " destroyed" << std::endl;
}

void WrongCat::makeSound() const
{
	std::cout << "Meow\n";
}