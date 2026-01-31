/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-petr <pde-petr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 14:22:39 by pde-petr          #+#    #+#             */
/*   Updated: 2026/01/31 15:20:01 by pde-petr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HPP_CLAPTRAP
#define HPP_CLAPTRAP

#include "string"

class ClapTrap
{
protected:
    std::string _name;
    int _hit_point;
    int _energy_points;
    int _attack_damage;
    static const int base_hit_point;
    static const int base_energy_points;
    static const int base_attack_damage;
    

public:
     ClapTrap(std::string _name);
    ClapTrap(const ClapTrap &other);
    ClapTrap &operator=(const ClapTrap &other);
    ~ClapTrap();
    
    void attack(const std::string &target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
};
#endif