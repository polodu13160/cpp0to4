/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-petr <pde-petr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 19:30:55 by pde-petr          #+#    #+#             */
/*   Updated: 2026/01/30 23:39:01 by pde-petr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HPP_FIXED
#define HPP_FIXED

#include <iostream>

class Fixed
{
public:
    Fixed();
    Fixed(int value);
    Fixed(float value);
    Fixed(const Fixed &newFixed);
    Fixed &operator=(const Fixed &cpy);
    Fixed &operator++();
    Fixed &operator--();
    Fixed operator++(int);
    Fixed operator--(int);
    Fixed operator+(const Fixed &a) const;
    Fixed operator-(const Fixed &a) const;
    Fixed operator*(const Fixed &a) const;
    Fixed operator/(const Fixed &a) const;
    bool operator>(const Fixed &a) const;
    bool operator<(const Fixed &a) const;
    bool operator<=(const Fixed &a) const;
    bool operator>=(const Fixed &a) const;
    bool operator==(const Fixed &a) const;
    bool operator!=(const Fixed &a) const;
    
    
    ~Fixed();
    int getRawBits(void) const;
    float toFloat( void) const;
    int toInt(void) const;
    void setRawBits(int const raw);
    static const Fixed &min(const Fixed &a, const Fixed &b);
    static const Fixed &max(const Fixed &a, const Fixed &b);
    
private:
    int _fixedPoint;
    static const int size;
};

std::ostream &operator<<(std::ostream &cout, Fixed const &value);

#endif
