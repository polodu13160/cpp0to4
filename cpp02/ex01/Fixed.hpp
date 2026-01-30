/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-petr <pde-petr@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 19:30:55 by pde-petr          #+#    #+#             */
/*   Updated: 2026/01/12 14:51:02 by pde-petr         ###   ########.fr       */
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
    ~Fixed();
    int getRawBits(void) const;
    float toFloat( void) const;
    int toInt(void) const;
    void setRawBits(int const raw);
    
private:
    int fixedPoint;
    static const int size;
};

std::ostream &operator<<(std::ostream &cout, Fixed const &value);

#endif
