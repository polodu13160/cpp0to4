/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-petr <pde-petr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 10:37:17 by pde-petr          #+#    #+#             */
/*   Updated: 2025/10/22 11:29:33 by pde-petr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *newZombie(std::string name)
{
    Zombie *zombielonglife = new Zombie(name);
    return zombielonglife;
}

Zombie *zombieHorde(int N, std::string name)
{
    if (N < 1)
        return NULL;
    Zombie *horde = new Zombie[N];
    if (horde == NULL)
        return NULL;
    Zombie *first_zombie = horde;
    for (int i = 0; i < N; horde++ && i++)
    {
        horde->setName(name);
        horde->announce();
    }
    return first_zombie;
}
