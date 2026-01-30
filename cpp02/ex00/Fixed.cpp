/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-petr <pde-petr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 19:48:45 by pde-petr          #+#    #+#             */
/*   Updated: 2026/01/30 16:55:22 by pde-petr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

const int Fixed::_numberFractionalBits = 8;

Fixed::Fixed() : _fixedPoint(0)
{
    std::cout << "default constructor" << std::endl;
    this->_fixedPoint = 0;
};


int Fixed::getRawBits(void) const
{
    return this->_fixedPoint;
}

void Fixed::setRawBits( int const raw )
{
    this->_fixedPoint = raw;
}


Fixed::Fixed(const Fixed &newFixed) 
{
     std::cout << "copy constructor" << std::endl;
    *this = newFixed;
};
Fixed &Fixed::operator=(const Fixed &cpy)
{
    std::cout << "copy constructor with =" << std::endl;
    this->_fixedPoint = cpy._fixedPoint;
    return *this;
};
Fixed::~Fixed()
{
    std::cout << "destructor called" << std::endl;
};



