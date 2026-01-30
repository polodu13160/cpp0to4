/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-petr <pde-petr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 19:48:45 by pde-petr          #+#    #+#             */
/*   Updated: 2026/01/30 23:39:01 by pde-petr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "math.h"

const int Fixed::size = 8;

Fixed const &Fixed::min(const Fixed &a, const Fixed &b)
{
    if (a < b)
        return a;
    else
        return b;
}

Fixed const &Fixed::max(const Fixed &a, const Fixed &b)
{
    if (a > b)
        return a;
    else
        return b;
}

Fixed::Fixed()
{
    std::cout << "default constructor" << std::endl;
    this->_fixedPoint = 0;
};

Fixed::Fixed(const int value)
{
    std::cout << "default constructor" << std::endl;
    this->_fixedPoint = value * (1 << this->size);
};

Fixed::Fixed(const float value)
{
    std::cout << "default constructor" << std::endl;
    this->_fixedPoint = value * (1 << this->size);
}

float Fixed::toFloat(void) const
{
    float value;
    value = (float)this->_fixedPoint / (1 << this->size);
    return value;
}

int Fixed::getRawBits(void) const
{
    return this->_fixedPoint;
}

int Fixed::toInt(void) const
{
    int value;
    value = this->_fixedPoint / (1 << this->size);
    return value;
}

void Fixed::setRawBits(int const raw)
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

Fixed Fixed::operator+(const Fixed &a) const 
{
    long value;
    Fixed temp;
    value = this->_fixedPoint + a._fixedPoint;
    temp._fixedPoint = value;
    return temp;
}
Fixed Fixed::operator*(const Fixed &a) const 
{
    long value;
    Fixed temp;
    value = (this->_fixedPoint) * a._fixedPoint;
    temp._fixedPoint = value >> ( Fixed::size);
    return temp;
}

Fixed Fixed::operator/(const Fixed &a) const
{
    long value;
    Fixed temp;
    value = this->_fixedPoint  / a._fixedPoint;
    temp._fixedPoint = value * (1 << Fixed::size);
    return temp;
}

Fixed Fixed::operator-(const Fixed &a) const 
{
    long value;
    Fixed temp;
    value = this->_fixedPoint - a._fixedPoint;
    temp._fixedPoint = value;
    return temp;
}

Fixed &Fixed::operator--() 
{
    this->_fixedPoint--;
    return *this;
}
Fixed &Fixed::operator++()
{
    this->_fixedPoint++;
    return *this;
}

Fixed Fixed::operator++(int )
{
    Fixed temp = *this;
    this->_fixedPoint++;
    return temp;
}

Fixed Fixed::operator--(int)
{
    Fixed temp = *this;
    this->_fixedPoint--;
    return temp;
}



bool Fixed::operator>(const Fixed &a) const 
{
    if (this->_fixedPoint > a._fixedPoint)
        return true;
    else
        return false;
}

bool Fixed::operator<(const Fixed &a) const 
{
    if (this->_fixedPoint < a._fixedPoint)
        return true;
    else
        return false;
}

bool Fixed::operator<=(const Fixed &a) const 
{
    if (this->_fixedPoint <= a._fixedPoint)
        return true;
    else
        return false;
}
bool Fixed::operator>=(const Fixed &a) const 
{
    if (this->_fixedPoint >= a._fixedPoint)
        return true;
    else
        return false;
}

bool Fixed::operator==(const Fixed &a) const 
{
    if (this->_fixedPoint == a._fixedPoint)
        return true;
    else
        return false;
}
bool Fixed::operator!=(const Fixed &a) const 
{
    if (this->_fixedPoint != a._fixedPoint)
        return true;
    else
        return false;
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
