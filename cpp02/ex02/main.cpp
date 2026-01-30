/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-petr <pde-petr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 20:24:24 by pde-petr          #+#    #+#             */
/*   Updated: 2026/01/30 23:35:48 by pde-petr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"
int main( void ) {
Fixed a;
Fixed const b( 10 );
Fixed c( 42.42f );
Fixed  d( c - b);
Fixed e;
a = Fixed( 1234.4321f );
std::cout << "a is " << a << std::endl;
std::cout << "b is " << b << std::endl;
e = c + c;
d = a * b;
Fixed x(0);
std::cout << "x is " << x << std::endl;
std::cout << "pre-increment : " << x++ << std::endl;
std::cout << "x is : " << x << std::endl;
std::cout << "c is " << c << std::endl;
std::cout << "d is " << d << std::endl;
std::cout << Fixed::max(c, d) <<"is bigger " << std::endl;
std::cout << Fixed::min(c, d) <<"is smaller " << std::endl;
std::cout << "a is " << a.toInt() << " as integer" << std::endl;
std::cout << "b is " << b.toInt() << " as integer" << std::endl;
std::cout << "c is " << c.toInt() << " as integer" << std::endl;
std::cout << "d is " << d.toInt() << " as integer" << std::endl;
return 0;
}