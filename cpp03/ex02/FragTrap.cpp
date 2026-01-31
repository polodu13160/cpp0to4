/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-petr <pde-petr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 16:32:23 by pde-petr          #+#    #+#             */
/*   Updated: 2026/01/31 15:30:29 by pde-petr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HPP_FRAGTrap
#define HPP_FRAGTrap

#include "FragTrap.hpp"
#include "iostream"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    _hit_point = 100;
    _energy_points = 100;
    _attack_damage = 30;
    std::cout << "FragTrap " << _name << " initialized" << std::endl;
}

FragTrap::FragTrap(const FragTrap &other) :  ClapTrap(other)
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