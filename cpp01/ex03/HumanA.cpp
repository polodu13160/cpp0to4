/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-petr <pde-petr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 18:34:44 by pde-petr          #+#    #+#             */
/*   Updated: 2025/10/14 13:40:33 by pde-petr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA(std::string name, Weapon &weapon) : _weapon(weapon), _name(name){}

void HumanA::set_weapon(Weapon weapon)
{
    this->_weapon.setType(weapon.getType());
}

void HumanA::attack()
{
    std::cout << this->_name + " attacks with their " + this->_weapon.getType() << std::endl;
}