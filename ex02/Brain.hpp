/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcissoko <hcissoko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/08 16:57:22 by hcissoko          #+#    #+#             */
/*   Updated: 2026/10/05 17:53:16 by hcissoko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <string>
#include <iostream>

class Brain
{
	private:
		std::string ideas_[100];
	public:
        Brain(void);
        Brain(const Brain& src);
        Brain& operator=(const Brain& rhs);
		~Brain(void);
		std::string	getIdea(int index);
		void		setIdea(int index, std::string idea);
};

#endif