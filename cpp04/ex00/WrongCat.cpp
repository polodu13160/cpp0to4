/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-petr <pde-petr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 15:25:34 by pde-petr          #+#    #+#             */
/*   Updated: 2026/01/31 17:22:14 by pde-petr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "WrongCat.hpp"
#include "iostream"

WrongCat::WrongCat()
{
    _type = "WrongCat";
    std::cout << "WrongCat is created" << std::endl;
}
WrongCat::WrongCat(const WrongCat &cpy)
{
    _type = cpy._type;
    std::cout << "WrongCat copy is created" << std::endl;
}

WrongCat::~WrongCat()
{

    std::cout << "WrongCat is deleted" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &cpy)
{
     _type = cpy._type;
    std::cout << "WrongWrongCat copy is created with = " << std::endl;
    return *this;
}

const std::string WrongCat::getType() const
{
    return this->_type;
}



void WrongCat::makeSound() const
{
     std::cout << "Miiiiiiiiiiiiiiiiiiiiaou" << std::endl;
}