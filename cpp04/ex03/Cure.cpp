/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-petr <pde-petr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 12:00:39 by pde-petr          #+#    #+#             */
/*   Updated: 2026/01/29 17:00:48 by pde-petr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include "iostream"
#include "interfaces/ICharacter.hpp"

Cure::Cure() : AMateria("cure")
{
    std::cout << "a cure is created" << std::endl;
}
Cure::Cure(const Cure &cpy) : AMateria(cpy.getType())
{
    std::cout << "a cure is created by cpy" << std::endl;
}
Cure &Cure::operator=(const Cure &cpy)
{
    _type = cpy.getType();
    std::cout << "a cure is created with =" << std::endl;
    return *this;
}
Cure::~Cure()
{
    std::cout << "a cure is deleted" << std::endl;
}

AMateria *Cure::clone() const 
{
    return new Cure(*this);
}
void Cure::use(ICharacter &target)
{
    std::cout << "heals "<< target.getName() << "s wounds" << std::endl;
}