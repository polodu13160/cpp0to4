/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-petr <pde-petr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 15:22:33 by pde-petr          #+#    #+#             */
/*   Updated: 2026/01/20 15:22:35 by pde-petr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include "iostream"

WrongAnimal::WrongAnimal()
{
    _type = "WrongAnimal";
    std::cout << "WrongAnimal is created" << std::endl;
}
WrongAnimal::WrongAnimal(WrongAnimal &cpy)
{
    _type = cpy._type;
    std::cout << "WrongAnimal copy is created" << std::endl;
}

const std::string WrongAnimal::getType() const
{
      return this->_type;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &cpy)
{
    _type = cpy._type;
    std::cout << "WrongWrongAnimal copy is created with = " << std::endl;
    return *this;
}
WrongAnimal::~WrongAnimal()
{

    std::cout << "WrongAnimal is deleted" << std::endl;
}
void WrongAnimal::makeSound() const
{
    std::cout << "WrongAnimal sound" << std::endl;
}