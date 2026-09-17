/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcissoko <hcissoko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/15 20:18:38 by hcissoko          #+#    #+#             */
/*   Updated: 2026/09/17 02:13:38 by hcissoko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include <iostream>

AMateria::AMateria(std::string const & type)
{
	this->type_ = type;
	std::cout << "[" << this->type_ << "] AMateria constructor called\n";
}

AMateria::AMateria(void)
{
	std::cout << "AMateria default constructor called\n";
}

AMateria::AMateria(const AMateria& src)
{
    this->type_ = src.type_;
	std::cout << "[" << this->type_ << "] AMateria copy constructor called\n";
}

AMateria& AMateria::operator=(const AMateria& rhs)
{
    (void)rhs;
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