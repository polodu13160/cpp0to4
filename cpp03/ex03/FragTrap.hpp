/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-petr <pde-petr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 16:32:32 by pde-petr          #+#    #+#             */
/*   Updated: 2026/01/31 15:31:44 by pde-petr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HPP_FRAGTRAP
#define HPP_FRAGTRAP

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
private:
    std::string _name;

protected:
    static const int base_hit_point;
    static const int base_energy_points;
    static const int base_attack_damage;

public:
    FragTrap(std::string _name);
    FragTrap(const FragTrap &other);
    ~FragTrap();
    FragTrap &operator=(const FragTrap &other);

    void highFivesGuys(void);
};

#endif