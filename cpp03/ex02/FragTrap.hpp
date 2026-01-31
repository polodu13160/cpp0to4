/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-petr <pde-petr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 16:32:32 by pde-petr          #+#    #+#             */
/*   Updated: 2026/01/31 15:31:34 by pde-petr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HPP_FRAGTRAP
#define HPP_FRAGTRAP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
private: 

public:
    FragTrap(std::string _name);
    FragTrap(const FragTrap &other);
    ~FragTrap();
    
    void highFivesGuys(void);
    FragTrap &operator=(const FragTrap &other);
    
};

#endif