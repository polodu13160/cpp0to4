/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-petr <pde-petr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/17 13:55:35 by pde-petr          #+#    #+#             */
/*   Updated: 2026/01/21 01:42:17 by pde-petr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "iostream"

Cat::Cat()
{
    _type = "Cat";
    _ideas = new Brain;
    std::cout << "Cat is created" << std::endl;
}
Cat::Cat(const Cat &cpy)
{
    _type = cpy._type;

    std::cout << "Cat copy is created" << std::endl;
    _ideas = new Brain(*cpy._ideas);
}

Cat &Cat::operator=(const Cat cpy)
{
    _type = cpy._type;
    std::cout << "Cat copy is created with =" << std::endl;
    delete _ideas;
    _ideas = new Brain(*cpy._ideas);
    return *this;
}

Cat::~Cat()
{
    delete _ideas;
    std::cout << "Cat is deleted" << std::endl;
}

const std::string Cat::getType() const
{
    return this->_type;
}

void Cat::makeSound() const
{
    std::cout << "Miiiiiiiiiiiiiiiiiiiiaou" << std::endl;
}