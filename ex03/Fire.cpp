/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fire.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcissoko <hcissoko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/15 23:01:06 by hcissoko          #+#    #+#             */
/*   Updated: 2026/09/15 23:09:48 by hcissoko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fire.hpp"

Fire::Fire() : AMateria("fire")
{}

Fire::Fire(Fire const& src) : AMateria("fire")
{
}

/*
TODO
AMateria& AMateria::operator=(const AMateria& rhs)
{
    if (this != &rhs)
    {
        this->type_ = rhs.type_;
    }
    return *this;
}

AMateria::~AMateria(void)
{
	std::cout << "[" << this->type_ << "] AMateria destructor called\n";
}

const std::string& AMateria::getType() const
{
	return this->type_;
}

void AMateria::use(ICharacter& target)
{
	std::cout << "Function use called on AMateria\n";

}
*/