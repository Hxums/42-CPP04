/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houms <houms@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/15 21:55:57 by hcissoko          #+#    #+#             */
/*   Updated: 2026/09/19 15:36:03 by houms            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include <iostream>

MateriaSource::MateriaSource()
{
    for (int i = 0; i < 4; i++)
        _inventory[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource& src)
{
    for (int i = 0; i < 4; i++)
    {
        this->_inventory[i] = NULL;
        if (src._inventory[i])
            this->_inventory[i] = src._inventory[i]->clone();
    }
}

MateriaSource::~MateriaSource()
{
    for (int i = 0; i < 4; i++)
    {
        if (this->_inventory[i])
            delete this->_inventory[i];
    }
}

MateriaSource&	MateriaSource::operator=(const MateriaSource& rhs)
{
    if (this == &rhs)
        return *this;
    for (int i = 0; i < 4; i++)
    {
        if (this->_inventory[i])
            delete this->_inventory[i];
        this->_inventory[i] = NULL;
        if (rhs._inventory[i])
            this->_inventory[i] = rhs._inventory[i]->clone();
    }
	return *this;
}

void MateriaSource::learnMateria(AMateria* m)
{
    for (int i = 0; i < 4; i++)
    {
        if (_inventory[i] == NULL)
        {
            if (m)
                _inventory[i] = m->clone();
            break;
        }
    }
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
    for (int i = 3; i >= 0; i--)
    {
        if (_inventory[i] && _inventory[i]->getType() == type)
            return _inventory[i]->clone();
    }
    return 0;
}