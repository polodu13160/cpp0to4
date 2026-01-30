/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-petr <pde-petr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/17 13:55:43 by pde-petr          #+#    #+#             */
/*   Updated: 2026/01/21 01:55:30 by pde-petr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "iostream"

Dog::Dog()
{
    _type = "Dog";
    this->_ideas = new Brain;

    std::cout << "Dog is created" << std::endl;
}
Dog::Dog(const Dog &cpy)
{

    _type = cpy._type;

    _type = cpy._type;
    std::cout << "Dog copy is created" << std::endl;
    _ideas = new Brain(*cpy._ideas);
}

Dog &Dog::operator=(const Dog cpy)
{

    _type = cpy._type;
    std::cout << "Dog copy is created with =" << std::endl;
    delete _ideas;
    _ideas = new Brain(*cpy._ideas);
    return *this;
}

Dog::~Dog()
{
    delete _ideas;
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

Brain &Dog::inBrain()
{
    return *this->_ideas;
}