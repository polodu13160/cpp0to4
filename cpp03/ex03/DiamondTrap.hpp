/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-petr <pde-petr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 16:49:41 by pde-petr          #+#    #+#             */
/*   Updated: 2026/01/31 15:37:40 by pde-petr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HPP_DIAMONDTRAP
#define HPP_DIAMONDTRAP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : virtual public FragTrap, public ScavTrap
{
private:
    std::string _name;

public:
    DiamondTrap(std::string _name);
    DiamondTrap(const DiamondTrap &other);
    ~DiamondTrap();
    void whoAmI();
    DiamondTrap &operator=(const DiamondTrap &other);
};

#endif