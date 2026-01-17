/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-petr <pde-petr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 15:32:50 by pde-petr          #+#    #+#             */
/*   Updated: 2026/01/15 16:33:17 by pde-petr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HPP_SCAVTRAP
#define HPP_SCAVTRAP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
private:
public:
    ScavTrap(std::string _name);
    ScavTrap(const ScavTrap &other);
    ~ScavTrap();

    void attack(const std::string &target);
    void guardGate();
};

#endif