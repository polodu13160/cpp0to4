/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-petr <pde-petr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 17:24:44 by pde-petr          #+#    #+#             */
/*   Updated: 2025/10/09 15:02:04 by pde-petr         ###   ########.fr       */
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
    Zombie();
    void setName(std::string name);
    void announce();
    
    private: 
    std::string name;
    static const std::string SPEAK;
};

Zombie* newZombie(std::string name); 
void randomChump( std::string name);
Zombie *zombieHorde(int N, std::string name);

#endif