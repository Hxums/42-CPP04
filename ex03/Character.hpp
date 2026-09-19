/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houms <houms@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/15 21:47:00 by hcissoko          #+#    #+#             */
/*   Updated: 2026/09/19 09:32:47 by houms            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include <string>
#include "ICharacter.hpp"
class AMateria;
class Character : public ICharacter
{
	private:
		std::string	_name;
		AMateria*	_inventory[4];
	public:
	Character(std::string name);
	Character(void);
	Character(const Character& src);
	Character&	operator=(const Character& rhs);
	virtual ~Character();
	virtual std::string const & getName() const;
	virtual void equip(AMateria* m);
	virtual void unequip(int idx);
	virtual void use(int idx, ICharacter& target);
};

#endif