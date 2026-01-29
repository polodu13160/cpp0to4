/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-petr <pde-petr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 14:22:34 by pde-petr          #+#    #+#             */
/*   Updated: 2026/01/21 14:13:43 by pde-petr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "iostream"

ClapTrap::ClapTrap(std::string name) : _name(name), _hit_point(10), _energy_points(10), _attack_damage(0)
{
     std::cout << "ClapTrap " << _name << " initialized" << std::endl;
}
ClapTrap::ClapTrap(const ClapTrap &other) : _name(other._name), _hit_point(other._hit_point), _energy_points(other._energy_points), _attack_damage(other._attack_damage)
{
    std::cout << "ClapTrap " << _name << " initialized  of the copy" << std::endl;
}
ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
    _name = other._name;
    _hit_point = other._hit_point;
    _energy_points = other._energy_points;
    _attack_damage = other._attack_damage;
    std::cout << "ClapTrap " << _name << " initialized  of the copy by the =" << std::endl;

    return *this;
}

void ClapTrap::attack(const std::string &target)
{
    if (_energy_points > 0)
    {
        std::cout << "ClapTrap " << _name << " attacks " << target
                  << ", causing " << _attack_damage << " points of damage!" << std::endl;
        _energy_points--;
    }
    else
        std::cout << "ClapTrap " << _name << " doesn't attack " << target
                  << " because he has no energy points" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
     std::cout << "ClapTrap " << _name << " take dommage " << amount << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (_energy_points > 0)
    {
        std::cout << "ClapTrap " << _name << " repairs itself of " << amount << std::endl;
        _energy_points--;
    }
    else
        std::cout << "ClapTrap " << _name << " doesn't repair itself of " << amount
                  << " because he has no energy points" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap " << _name << " is destroyed" << std::endl;
}
