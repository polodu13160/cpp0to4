/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-petr <pde-petr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 18:14:52 by pde-petr          #+#    #+#             */
/*   Updated: 2025/10/22 11:23:47 by pde-petr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP
#include "string"

class Weapon
{
    public: 
        Weapon(std::string name);
        const std::string getType() const;
        void setType(std::string type);
    private: 
        std::string type;    
};
#endif