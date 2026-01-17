/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-petr <pde-petr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 15:32:47 by pde-petr          #+#    #+#             */
/*   Updated: 2026/01/15 16:42:01 by pde-petr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "iostream"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    _hit_point = 100;
    _energy_points = 50;
    _attack_damage = 20;
    std::cout << "ScavTrap " << _name << " initialized" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other)
{
    _name = other._name;
    _hit_point = 100;
    _energy_points = 50;
    _attack_damage = 20;
    std::cout << "ScavTrap " << _name << " initialized  of the copy" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap " << _name << " is destroyed" << std::endl;
}

void ScavTrap::attack(const std::string &target)
{
    if (_energy_points > 0)
    {
        std::cout << "ScavTrap " << _name << " attacks " << target
                  << ", causing " << _attack_damage << " points of damage!" << std::endl;
        _energy_points--;
    }
    else
        std::cout << "ScavTrap " << _name << " doesn't attack " << target
                  << " because he has no energy points" << std::endl;
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << _name << " is now Gate keeper mode" << std::endl;
}