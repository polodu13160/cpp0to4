/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-petr <pde-petr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 16:32:23 by pde-petr          #+#    #+#             */
/*   Updated: 2026/01/31 15:32:06 by pde-petr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HPP_FRAGTrap
#define HPP_FRAGTrap

#include "FragTrap.hpp"
#include "iostream"

const int FragTrap::base_hit_point = 100;
const int FragTrap::base_energy_points = 100;
const int FragTrap::base_attack_damage = 30;

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    this->_name = name;
    _hit_point = FragTrap::base_hit_point;
    _energy_points = FragTrap::base_energy_points;
    _attack_damage = FragTrap::base_attack_damage;
    std::cout << "FragTrap " << _name << " initialized" << std::endl;
}

FragTrap::FragTrap(const FragTrap &other) : ClapTrap(other)
{
    _name = other._name;
    _hit_point = other._hit_point;
    _energy_points = other._energy_points;
    _attack_damage = other._attack_damage;
    std::cout << "FragTrap " << _name << " initialized  of the copy" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap " << _name << " is destroyed" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap " << _name << " : Give me a high five" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &other)
{
    _name = other._name;
    _hit_point = other._hit_point;
    _energy_points = other._energy_points;
    _attack_damage = other._attack_damage;
    std::cout << "FragTrap " << _name << " initialized  of the copy by the =" << std::endl;

    return *this;
}

#endif