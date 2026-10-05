/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcissoko <hcissoko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/08 17:01:20 by hcissoko          #+#    #+#             */
/*   Updated: 2026/10/05 17:52:05 by hcissoko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Default Brain created" << std::endl;
}

Brain::Brain(const Brain& src)
{
    for (int i = 0; i < 100; i++)
        this->ideas_[i] = src.ideas_[i];
    std::cout << "Brain copied" << std::endl;
}

Brain& Brain::operator=(const Brain& rhs)
{
    if (this != &rhs)
    {
        for (int i = 0; i < 100; i++)
            this->ideas_[i] = rhs.ideas_[i];
        std::cout << "Brain assigned" << std::endl;
    }
    return *this;
}

Brain::~Brain(void)
{
    std::cout << "Brain destroyed" << std::endl;
}

std::string Brain::getIdea(int index)
{
    if (index >= 0 && index < 100)
        return this->ideas_[index];
    return NULL;
}

void    Brain::setIdea(int index, std::string idea)
{
    if (index >= 0 && index < 100)
        this->ideas_[index] = idea;
}