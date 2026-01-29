/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-petr <pde-petr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 11:45:51 by pde-petr          #+#    #+#             */
/*   Updated: 2026/01/21 00:56:24 by pde-petr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include "iostream"

Brain::Brain()
{
    std::cout << "Brain is created" << std::endl;
}

Brain::Brain(const Brain &cpy)
{
    int i;
    i = 0;
    while (cpy._ideas[i].empty() != true)
    {
        _ideas[i] = cpy._ideas[i];
        i++;
    }
    std::cout << "Brain copy is created" << std::endl;
}

Brain &Brain::operator=(const Brain &cpy)
{
    int i;

    i = 0;
    while (cpy._ideas[i].empty() != true)
    {
        _ideas[i] = cpy._ideas[i];
        i++;
    }
    std::cout << "Brain copy is created witch operator" << std::endl;
    return *this;
}

Brain::~Brain()
{
    std::cout << "Brain is deleted" << std::endl;
}

std::string Brain::getIdeas(int index) const
{
    if (index >= 100)
        return "No valid index";

    return this->_ideas[index];
}

void Brain::setIdeas(std::string key, int index)
{
    if (index >= 100)
        return;
    this->_ideas[index] = key;
}