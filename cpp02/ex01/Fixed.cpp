/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-petr <pde-petr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 19:48:45 by pde-petr          #+#    #+#             */
/*   Updated: 2026/01/30 23:39:25 by pde-petr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::_fractionalBits = 8;

Fixed::Fixed()
{
    std::cout << "default constructor" << std::endl;
    this->_fixedPoint = 0;
};


Fixed::Fixed(const int value)
{
    std::cout << "default constructor with int" << std::endl;
    this->_fixedPoint = value * (1 << this->_fractionalBits);
};

Fixed::Fixed(const float value)
{
    std::cout << "default constructor with float" << std::endl;
    this->_fixedPoint = value * (1 << this->_fractionalBits);
}

float Fixed::toFloat( void ) const
{
    float value;
    value = (float)this->_fixedPoint / (1 << this->_fractionalBits);
    return value;
}

int Fixed::getRawBits(void) const
{
    return this->_fixedPoint;
}

int Fixed::toInt(void) const
{
    int value;
    value = this->_fixedPoint / (1 << this->_fractionalBits);
    return value;
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
    std::cout << "copy constructor" << std::endl;
    this->_fixedPoint = cpy._fixedPoint;
    return *this;
};


Fixed::~Fixed()
{
    std::cout << "destructor called" << std::endl;
};

std::ostream &operator<<(std::ostream &cout, Fixed const &value)
{
    // void(value);
    cout << value.toFloat();
    return (cout);
};




