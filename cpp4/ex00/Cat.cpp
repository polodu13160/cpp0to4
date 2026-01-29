/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-petr <pde-petr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/17 13:55:35 by pde-petr          #+#    #+#             */
/*   Updated: 2026/01/21 01:56:09 by pde-petr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "iostream"

Cat::Cat()
{
    _type = "Cat";
    std::cout << "Cat is created" << std::endl;
}
Cat::Cat(Cat &cpy)
{
    _type = cpy._type;
    std::cout << "Cat copy is created" << std::endl;
}

Cat &Cat::operator=(const Cat cpy)
{
    _type = cpy._type;
    std::cout << "Cat copy is created with =" << std::endl;
    return *this;
}

Cat::~Cat()
{

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