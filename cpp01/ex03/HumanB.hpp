/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-petr <pde-petr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 18:26:28 by pde-petr          #+#    #+#             */
/*   Updated: 2025/10/22 11:24:46 by pde-petr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_B_HPP
#define HUMAN_B_HPP
#include "Weapon.hpp"

class HumanB
{
    public :
        void attack(); 
        HumanB(std::string name);
        void set_weapon(Weapon *weapon);
        ~HumanB();
    private:
        Weapon *_weapon;
        std::string _name; 
};
#endif