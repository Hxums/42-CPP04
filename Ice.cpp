/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcissoko <hcissoko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/17 01:52:05 by hcissoko          #+#    #+#             */
/*   Updated: 2026/09/17 02:17:17 by hcissoko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Ice.hpp"

Ice::Ice() : AMateria("ice"){}

Ice::Ice(Ice const& src) : AMateria("ice"){}

Ice & Ice::operator=(Ice const & rhs)
{
    AMateria::operator=(rhs);
	return *this;
}

Ice::~Ice() {}

AMateria* Ice::clone() const
{
	
}

void AMateria::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *";

}