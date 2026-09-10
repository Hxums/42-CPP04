/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcissoko <hcissoko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/03 17:38:34 by hcissoko          #+#    #+#             */
/*   Updated: 2026/09/09 19:36:11 by hcissoko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "Cat.hpp"

Cat::Cat() : Animal()
{
	this->type_ = "Cat";
    std::cout << "Cat created" << std::endl;
}

Cat::Cat(const Cat& src) : Animal(src)
{
    std::cout << "Cat copied" << std::endl;
}

Cat& Cat::operator=(const Cat& rhs)
{
    if (this != &rhs)
    {
        this->type_ = rhs.type_;
        std::cout << "Cat assigned" << std::endl;
    }
    return *this;
}

Cat::~Cat(void)
{
    std::cout << "Cat destroyed" << std::endl;
}

void Cat::makeSound() const
{
	std::cout << "Meow\n";
}