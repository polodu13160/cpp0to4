/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-petr <pde-petr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 19:30:55 by pde-petr          #+#    #+#             */
/*   Updated: 2026/01/30 16:54:26 by pde-petr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HPP_FIXED
#define HPP_FIXED

class Fixed
{
public:
    Fixed();
    Fixed(const Fixed &newFixed);
    Fixed &operator=(const Fixed &cpy);
    ~Fixed();
    int getRawBits(void) const;
    void setRawBits(int const raw);
    
private:
    int _fixedPoint;
    static const int _numberFractionalBits;
};

#endif
