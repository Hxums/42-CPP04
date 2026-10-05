/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcissoko <hcissoko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/03 17:38:34 by hcissoko          #+#    #+#             */
/*   Updated: 2026/10/05 18:02:29 by hcissoko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
    this->brain_ = new Brain();
    std::cout << "Cat created" << std::endl;
}

Cat::Cat(const Cat& src) : Animal(src)
{
    this->brain_ = new Brain();
    *this->brain_ = *src.brain_;
    std::cout << "Cat copied" << std::endl;
}

Cat& Cat::operator=(const Cat& rhs)
{
    if (this != &rhs)
    {
        *this->brain_= *rhs.brain_;
        Animal::operator=(rhs);
        std::cout << "Cat assigned" << std::endl;
    }
    return *this;
}

Cat::~Cat(void)
{
    delete this->brain_;
    std::cout << "Cat destroyed" << std::endl;
}

void Cat::makeSound() const
{
	std::cout << "Meow\n";
}

Brain* Cat::getBrain()
{
    return this->brain_;
}