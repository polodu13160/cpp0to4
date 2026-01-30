/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-petr <pde-petr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 00:54:20 by pde-petr          #+#    #+#             */
/*   Updated: 2026/01/29 19:02:05 by pde-petr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "iostream"
#include "interfaces/ICharacter.hpp"

AMateria::AMateria(std::string const &type)
{
    _type = type;

    for (size_t i = 0; i < type.size(); i++)
        _type[i] = std::tolower(_type[i]);
    std::cout << "Amateria " << type << "is created" << std::endl;
}
AMateria::AMateria()
{
    std::cout << "Amateria " << "is created" << std::endl;
}
AMateria &AMateria::operator=(AMateria &cpy)
{
    this->_type = cpy._type;
    std::cout << "Amateria " << "is created with =" << std::endl;
    return *this;
}
AMateria::~AMateria()
{
    std::cout << "Amateria " << "is deleted" << std::endl;
}

std::string const &AMateria::getType() const
{
    return this->_type;
}

void AMateria::use(ICharacter &target)
{
    std::cout << "the " << _type << "use on " << target.getName()  << std::endl;
}
