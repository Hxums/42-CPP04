/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcissoko <hcissoko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/15 23:01:06 by hcissoko          #+#    #+#             */
/*   Updated: 2026/09/17 02:32:34 by hcissoko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Cure.hpp"


Cure::Cure() : AMateria("cure"){}

Cure::Cure(Cure const& src) : AMateria("cure"){}

Cure & Cure::operator=(Cure const & rhs)
{
    AMateria::operator=(rhs);
	return *this;
}

Cure::~Cure() {}

AMateria* Cure::clone() const{}

void AMateria::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *";
}
