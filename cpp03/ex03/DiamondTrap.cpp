/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-petr <pde-petr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 16:51:19 by pde-petr          #+#    #+#             */
/*   Updated: 2026/01/31 15:40:33 by pde-petr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include "ClapTrap.hpp"
#include "iostream"

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), FragTrap(name), ScavTrap(name)
{
    this->_name = name;
    this->_hit_point = FragTrap::base_hit_point;
    this->_energy_points = ScavTrap::base_energy_points;
    this->_attack_damage = FragTrap::base_attack_damage;

    std::cout << "DiamondTrap " << _name << " initialized" << std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &other)
{
    _name = other._name;
    _hit_point = other._hit_point;
    _energy_points = other._energy_points;
    _attack_damage = other._attack_damage;
    std::cout << "DiamondTrap " << _name << " initialized  of the copy by the =" << std::endl;

    return *this;
}

DiamondTrap::DiamondTrap(const DiamondTrap &other) : ClapTrap(other), FragTrap(other), ScavTrap(other)
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