/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-petr <pde-petr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 18:26:28 by pde-petr          #+#    #+#             */
/*   Updated: 2025/10/22 11:22:56 by pde-petr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_A_HPP
#define HUMAN_A_HPP

#include "Weapon.hpp"

class HumanA
{
    public :
        void attack(); 
        HumanA(std::string name, Weapon &weapon);
        void set_weapon(Weapon weapon);
    private:
        Weapon &_weapon;
        std::string _name; 
};
#endif

