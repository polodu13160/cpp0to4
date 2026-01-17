/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-petr <pde-petr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 17:24:44 by pde-petr          #+#    #+#             */
/*   Updated: 2025/10/22 11:16:23 by pde-petr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include "string"


class Zombie
{
    public:
    Zombie(std::string name);
    ~Zombie();
    void announce(void);
    
    
    private: 
    std::string name;
    static const std::string SPEAK;
};

Zombie* newZombie(std::string name); 
void randomChump( std::string name);
#endif