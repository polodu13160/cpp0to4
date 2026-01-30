/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-petr <pde-petr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 19:30:55 by pde-petr          #+#    #+#             */
/*   Updated: 2026/01/30 23:39:25 by pde-petr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HPP_FIXED
#define HPP_FIXED

#include <iostream>

class Fixed
{
public:
    Fixed();
    Fixed(const int value);
    Fixed(const float value);
    Fixed(const Fixed &newFixed);
    Fixed &operator=(const Fixed &cpy);
    ~Fixed();
    int getRawBits(void) const;
    float toFloat( void) const;
    int toInt(void) const;
    void setRawBits(int const raw);
    
private:
    int _fixedPoint;
    static const int _fractionalBits;
};

std::ostream &operator<<(std::ostream &cout, Fixed const &value);

#endif
