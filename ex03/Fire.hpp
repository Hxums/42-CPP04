/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fire.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcissoko <hcissoko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/15 22:05:59 by hcissoko          #+#    #+#             */
/*   Updated: 2026/09/15 23:04:38 by hcissoko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIRE_HPP
# define FIRE_HPP

#include "AMateria.hpp"

class Fire: public AMateria
{
    private:
    public:
        Fire(void);
        Fire(const Fire& src);
        Fire&	operator=(const Fire& rhs);
        virtual	~Fire(void);
		virtual void	use(ICharacter& target);
};

#endif