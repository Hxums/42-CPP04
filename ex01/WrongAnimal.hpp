/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcissoko <hcissoko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/03 17:25:35 by hcissoko          #+#    #+#             */
/*   Updated: 2026/09/08 16:39:26 by hcissoko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_ANIMAL_HPP
# define WRONG_ANIMAL_HPP

#include <string>
#include <iostream>

class WrongAnimal
{
    protected:
        std::string type_;
    public:
        WrongAnimal(std::string type);
        WrongAnimal(void);
        WrongAnimal(const WrongAnimal& src);
        WrongAnimal& operator=(const WrongAnimal& rhs);
        ~WrongAnimal(void);
        std::string    getType(void) const;
		void makeSound(void) const;
};

#endif