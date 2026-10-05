/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcissoko <hcissoko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/17 02:50:28 by hcissoko          #+#    #+#             */
/*   Updated: 2026/10/05 22:16:09 by hcissoko         ###   ########.fr       */
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
	MateriaSource	*src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	std::cout << "---------------------------- Test with operator----------------------------\n";
	Character	*a = new Character("A");
	Character	*b = new Character("B");
	Character	*c = new Character("C");
	a->equip(src->createMateria("ice"));
	b->equip(src->createMateria("cure"));
	std::cout << "Before reaffectation of a\n";
	a->use(0, *c);
	*a = *b;
	std::cout << "After reaffectation of a\n";
	a->use(0, *c);
	delete a;
	delete b;
	delete c;
	std::cout << "---------------------------- Test with character ----------------------------\n";
	Character* alex = new Character("alex");
	Character* charlie = new Character("charlie");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	alex->equip(tmp);
	tmp = src->createMateria("cure");
	alex->equip(tmp);
	Character copy(*alex);
	ICharacter* bob = new Character("bob");
	delete alex;
	copy.use(0, *bob);
	copy.use(1, *bob);
	std::cout << "---------------------------- Test full inventory ----------------------------\n";
	tmp = src->createMateria("cure");
	charlie->equip(tmp);
	tmp = src->createMateria("ice");
	charlie->equip(tmp);
	tmp = src->createMateria("cure");
	charlie->equip(tmp);
	tmp = src->createMateria("ice");
	charlie->equip(tmp);
	tmp = src->createMateria("cure");
	charlie->equip(tmp);
	charlie->use(0, *bob);
	charlie->use(3, *bob);
	delete bob;
	delete src;
	delete charlie;
	delete tmp; // because the last tmp can't be equipped

	return 0;
}
