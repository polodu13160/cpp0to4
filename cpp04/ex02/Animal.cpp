/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-petr <pde-petr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/17 13:49:20 by pde-petr          #+#    #+#             */
/*   Updated: 2026/01/21 22:53:35 by pde-petr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "iostream"

Animal::Animal()
{
    _type = "Animal";
    std::cout << "Animal is created" << std::endl;
}
Animal::Animal(Animal &cpy)
{
    _type = cpy._type;
    std::cout << "Animal copy is created" << std::endl;
}

Animal &Animal::operator=(const Animal &cpy)
{
    _type = cpy._type;
    std::cout << "Animal copy is created with =" << std::endl;
    return *this;
}
Animal::~Animal()
{

    std::cout << "Animal is deleted" << std::endl;
}