/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcissoko <hcissoko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/15 22:05:59 by hcissoko          #+#    #+#             */
/*   Updated: 2026/09/17 02:32:49 by hcissoko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

#include "AMateria.hpp"

class Cure: public AMateria
{
    private:
    public:
        Cure(void);
        Cure(const Cure& src);
        Cure&	operator=(const Cure& rhs);
        virtual	~Cure(void);
		virtual void	use(ICharacter& target);
        virtual AMateria*   clone() const;
};

#endif