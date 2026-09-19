/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houms <houms@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/15 20:18:38 by hcissoko          #+#    #+#             */
/*   Updated: 2026/09/19 15:35:17 by houms            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include <iostream>

AMateria::AMateria(std::string const & type)
{
	this->type_ = type;
}

AMateria::AMateria(void)
{
}

AMateria::AMateria(const AMateria& src)
{
    this->type_ = src.type_;
}

AMateria& AMateria::operator=(const AMateria& rhs)
{
    (void)rhs;
    return *this;
}

AMateria::~AMateria(void)
{
}

const std::string& AMateria::getType() const
{
	return this->type_;
}

void AMateria::use(ICharacter& target)
{
	(void)target;
}