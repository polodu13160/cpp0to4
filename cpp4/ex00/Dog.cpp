/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-petr <pde-petr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/17 13:55:43 by pde-petr          #+#    #+#             */
/*   Updated: 2026/01/20 18:27:38 by pde-petr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "iostream"

Dog::Dog()
{
    _type = "Dog";

    std::cout << "Dog is created" << std::endl;
}
Dog::Dog(Dog &cpy)
{
    _type = cpy._type;
    std::cout << "Dog copy is created" << std::endl;
}

Dog &Dog::operator=(const Dog cpy)
{
    _type = cpy._type;
    std::cout << "Dog copy is created with =" << std::endl;
    return *this;
}

Dog::~Dog()
{

    std::cout << "Dog is deleted" << std::endl;
}


const std::string Dog::getType() const
{
    return this->_type;
}


void Dog::makeSound() const
{
    std::cout << "Woooooooooooooooooooooooouf" << std::endl;
}