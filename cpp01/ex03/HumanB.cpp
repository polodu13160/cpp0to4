/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-petr <pde-petr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 18:34:44 by pde-petr          #+#    #+#             */
/*   Updated: 2025/10/22 11:25:16 by pde-petr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(std::string name) : _name(name){}

HumanB::~HumanB()
{
    if (this->_weapon != NULL)
        delete this->_weapon;
}

void HumanB::set_weapon(Weapon *weapon)
{
    if (this->_weapon != NULL)
        delete this->_weapon;
    this->_weapon = weapon;
}

void HumanB::attack()
{
    if (this->_weapon != NULL)
    std::cout << this->_name + " attacks with their " + this->_weapon->getType() << std::endl;
}
