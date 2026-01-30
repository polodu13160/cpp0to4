/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-petr <pde-petr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 01:24:32 by pde-petr          #+#    #+#             */
/*   Updated: 2026/01/29 16:14:59 by pde-petr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

#include "Ice.hpp"
#include "iostream"
#include "interfaces/ICharacter.hpp"

Ice::Ice() : AMateria("ice")
{
    std::cout << "a ice is created" << std::endl;
}
Ice::Ice(const Ice &cpy) : AMateria(cpy.getType())
{
    std::cout << "a ice is created by cpy" << std::endl;
}
Ice &Ice::operator=(const Ice &cpy) 
{
    _type = cpy.getType();
    std::cout << "a ice is created with =" << std::endl;
    return *this;
}
Ice::~Ice()
{
    std::cout << "a ice is deleted" << std::endl;
}

AMateria *Ice::clone() const 
{
    return new Ice(*this);
}
void Ice::use(ICharacter &target)
{
    std::cout << "heals "<< target.getName() << "s wounds" << std::endl;
}