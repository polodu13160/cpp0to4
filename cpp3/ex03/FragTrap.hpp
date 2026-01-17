/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-petr <pde-petr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 16:32:32 by pde-petr          #+#    #+#             */
/*   Updated: 2026/01/17 12:30:48 by pde-petr         ###   ########.fr       */
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
    int _hit_point;
    int _attack_damage;

public:
    FragTrap(std::string _name);
    FragTrap(const FragTrap &other);
    ~FragTrap();
    
    void highFivesGuys(void);
};

#endif