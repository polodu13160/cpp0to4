/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-petr <pde-petr@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 19:48:45 by pde-petr          #+#    #+#             */
/*   Updated: 2026/01/13 17:57:23 by pde-petr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::size = 8;

Fixed::Fixed()
{
    std::cout << "default constructor" << std::endl;
    this->fixedPoint = 0;
};


Fixed::Fixed(const int value)
{
    std::cout << "default constructor" << std::endl;
    this->fixedPoint = value * (1 << this->size);
};

Fixed::Fixed(const float value)
{
    std::cout << "default constructor" << std::endl;
    this->fixedPoint = value * (1 << this->size);
    std::cout << this->fixedPoint  << std::endl;
}

float Fixed::toFloat( void ) const
{
    float value;
    value = (float)this->fixedPoint / (1 << this->size);
    return value;
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits called" << std::endl;
    return this->fixedPoint;
}

int Fixed::toInt(void) const
{
    int value;
    value = this->fixedPoint / (1 << this->size);
    return value;
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

Fixed &Fixed::operator++(int value)
{
    
}


Fixed::~Fixed()
{
    std::cout << "destructor called" << std::endl;
};

std::ostream &operator<<(std::ostream &cout, Fixed const &value)
{
    cout << value.toFloat();
    return (cout);
};




