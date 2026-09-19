/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcissoko <hcissoko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/15 22:06:03 by hcissoko          #+#    #+#             */
/*   Updated: 2026/09/19 19:24:45 by hcissoko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

#include "AMateria.hpp"

class Ice: public AMateria
{
    public:
        Ice(void);
        Ice(const Ice& src);
        Ice&	operator=(const Ice& rhs);
        virtual	~Ice(void);
		virtual void	use(ICharacter& target);
		virtual AMateria*   clone() const;
};

#endif