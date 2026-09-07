/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcissoko <hcissoko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/03 17:38:34 by hcissoko          #+#    #+#             */
/*   Updated: 2026/09/03 17:55:43 by hcissoko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "Cat.hpp"


Cat::Cat(std::string type) : Animal(type)
{
	this->type_ = type;
    std::cout << "Cat of type " << this->type_ << " created ";
}

Cat::Cat() : Animal()
{
	this->type_ = "No type defined";
    std::cout << "Default Cat created" << std::endl;
}

Cat::Cat(const Cat& src) : Animal(src)
{
    std::cout << "Cat " << src.type_ << " copied" << std::endl;
}

Cat& Cat::operator=(const Cat& rhs)
{
    if (this != &rhs)
    {
        this->type_ = rhs.type_;
        std::cout << "Cat " << rhs.type_ << " assigned" << std::endl;
    }
    return *this;
}

Cat::~Cat(void)
{
    std::cout << "Cat " << this->type_ << " destroyed" << std::endl;
}

void Cat::makeSound() const
{
	std::cout << "Meow\n";
}