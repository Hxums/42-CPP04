/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcissoko <hcissoko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/15 21:55:57 by hcissoko          #+#    #+#             */
/*   Updated: 2026/09/19 19:42:04 by hcissoko         ###   ########.fr       */
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
    if (!m)
        return;
    for (int i = 0; i < 4; i++)
    {
        if (_inventory[i] == NULL)
        {
            _inventory[i] = m;
            return;
        }
    }
    delete m; // if m can't be saved, to avoid leak
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
    for (int i = 0; i < 3; i++)
    {
        if (_inventory[i] && _inventory[i]->getType() == type)
            return _inventory[i]->clone();
    }
    return 0;
}