/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcissoko <hcissoko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/03 17:25:35 by hcissoko          #+#    #+#             */
/*   Updated: 2026/10/05 19:47:49 by hcissoko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <string>
#include <iostream>

class Animal
{
    protected:
        std::string type_;
    public:
        Animal(std::string type);
        Animal(void);
        Animal(const Animal& src);
        Animal& operator=(const Animal& rhs);
        virtual ~Animal(void);
        std::string    getType(void) const;
		virtual void makeSound(void) const = 0;
};

#endif