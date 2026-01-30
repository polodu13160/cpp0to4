/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-petr <pde-petr@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 19:30:55 by pde-petr          #+#    #+#             */
/*   Updated: 2025/12/25 17:22:23 by pde-petr         ###   ########.fr       */
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
    int fixedPoint;
    static const int size;
};

#endif
