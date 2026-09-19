/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcissoko <hcissoko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/19 08:13:24 by houms             #+#    #+#             */
/*   Updated: 2026/09/19 22:28:01 by hcissoko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include <iostream>

Character::Character(std::string name)
{
    this->_name = name;
    for (int i = 0; i < 4; i++)
        _inventory[i] = NULL;
}

Character::Character(void)
{
    this->_name = "Default";
    for (int i = 0; i < 4; i++)
        _inventory[i] = NULL;
}

Character::Character(const Character& src)
{
    this->_name = src._name;
    for (int i = 0; i < 4; i++)
    {
        this->_inventory[i] = NULL;
        if (src._inventory[i])
            this->_inventory[i] = src._inventory[i]->clone();
    }
}

Character & Character::operator=(const Character& rhs)
{
    if (this == &rhs)
        return *this;
    this->_name = rhs._name;
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

Character::~Character()
{
    for (int i = 0; i < 4; i++)
    {
        if (this->_inventory[i])
            delete this->_inventory[i];
    }
}
std::string const & Character::getName() const
{
    return this->_name;
}
void Character::equip(AMateria* m)
{
    if (m == NULL)
        return;
    for(int i = 0; i < 4; i++)
    {
        if (this->_inventory[i] == NULL)
        {
            _inventory[i] = m;
            std::cout << m->getType() << " equiped at slot " << i << "\n";
            break;
        }
    }
}

void Character::unequip(int idx)
{
    if (idx >= 0 && idx <= 3 && this->_inventory[idx])
        this->_inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter& target)
{
    if (idx >= 0 && idx <= 3 && this->_inventory[idx])
        this->_inventory[idx]->use(target);
}