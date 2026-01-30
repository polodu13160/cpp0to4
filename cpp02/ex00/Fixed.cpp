/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-petr <pde-petr@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 19:48:45 by pde-petr          #+#    #+#             */
/*   Updated: 2026/01/11 18:09:37 by pde-petr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

const int Fixed::size = 8;

Fixed::Fixed()
{
    std::cout << "default constructor" << std::endl;
    this->fixedPoint = 0;
};


int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits called" << std::endl;
    return this->fixedPoint;
}

void Fixed::setRawBits( int const raw )
{
    this->fixedPoint = raw;
}


Fixed::Fixed(const Fixed &newFixed) 
{
     std::cout << "copy constructor" << std::endl;
    *this = newFixed;
};
Fixed &Fixed::operator=(const Fixed &cpy)
{
    std::cout << "copy constructor" << std::endl;
    this->fixedPoint = cpy.fixedPoint;
    return *this;
};
Fixed::~Fixed()
{
    std::cout << "destructor called" << std::endl;
};



