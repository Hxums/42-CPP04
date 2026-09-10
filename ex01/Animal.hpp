/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcissoko <hcissoko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/03 17:25:35 by hcissoko          #+#    #+#             */
/*   Updated: 2026/09/09 19:46:57 by hcissoko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <string>
#include <iostream>
#include "Brain.hpp"

class Animal
{
    protected:
        std::string type_;
        Brain*       brain_;
    public:
        Animal(std::string type);
        Animal(void);
        Animal(const Animal& src);
        Animal& operator=(const Animal& rhs);
        virtual ~Animal(void);
        std::string     getType(void) const;
		virtual void makeSound(void) const;
};

#endif