/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcissoko <hcissoko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/17 02:50:28 by hcissoko          #+#    #+#             */
/*   Updated: 2026/09/19 22:39:34 by hcissoko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "ICharacter.hpp"
#include "IMateriaSource.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"
#include <iostream>

/*
int main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	delete bob;
	delete me;
	delete src;
	return 0;
}*/

int	main()
{
	std::cout << "Test with character\n";
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	Character* me = new Character("me");
	Character* you = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	Character copy(*me);
	ICharacter* bob = new Character("bob");
	*bob = *me;
	delete me;
	copy.use(0, *bob);
	copy.use(1, *bob);
	std::cout << "Test full inventory\n";
	tmp = src->createMateria("cure");
	you->equip(tmp);
	tmp = src->createMateria("cure");
	you->equip(tmp);
	tmp = src->createMateria("cure");
	you->equip(tmp);
	tmp = src->createMateria("cure");
	you->equip(tmp);
	tmp = src->createMateria("cure");
	you->equip(tmp);
	you->use(0, *bob);
	you->use(3, *bob);
	delete bob;
	delete src;
	delete you;
}