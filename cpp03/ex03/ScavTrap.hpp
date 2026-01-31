/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-petr <pde-petr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 15:32:50 by pde-petr          #+#    #+#             */
/*   Updated: 2026/01/31 15:32:36 by pde-petr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HPP_SCAVTRAP
#define HPP_SCAVTRAP

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
private:
    std::string _name;

protected:
    int _energy_points;
    static const int base_hit_point;
    static const int base_energy_points;
    static const int base_attack_damage;

public:
    ScavTrap(std::string _name);
    ScavTrap(const ScavTrap &other);
    ~ScavTrap();
    ScavTrap &operator=(const ScavTrap &other);

    void attack(const std::string &target);
    void guardGate();
};

#endif