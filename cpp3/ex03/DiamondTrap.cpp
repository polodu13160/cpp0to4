/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-petr <pde-petr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 16:51:19 by pde-petr          #+#    #+#             */
/*   Updated: 2026/01/17 12:35:24 by pde-petr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include "ClapTrap.hpp"
#include "iostream"

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), FragTrap(name), ScavTrap(name)
{
    this->_name = name;
    this->_hit_point = FragTrap::_hit_point;
    this->_energy_points = ScavTrap::_energy_points;
    this->_attack_damage = FragTrap::_attack_damage;
     
    std::cout << "DiamondTrap " << _name << " initialized" << std::endl;
}



DiamondTrap::DiamondTrap(const DiamondTrap &other) : ClapTrap(other), FragTrap(other),  ScavTrap(other)
{
    this->_name = other._name;
    this->_hit_point = other._hit_point;
    this->_energy_points = other._energy_points;
    this->_attack_damage = other._attack_damage;
    std::cout << "ScavTrap " << _name << " initialized  of the copy" << std::endl;
}
DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap " << _name << " is destroyed" << std::endl;
}

void DiamondTrap::whoAmI()
{
    std::cout << "I am a DiamondTrap named: " << this->_name << std::endl;
    std::cout << "My ClapTrap name is: " << ClapTrap::_name << std::endl;
}