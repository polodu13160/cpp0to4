/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-petr <pde-petr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 17:23:45 by pde-petr          #+#    #+#             */
/*   Updated: 2025/10/16 14:43:19 by pde-petr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie zombie1("basic");
    Zombie *zombie2 = newZombie("malloc");
    randomChump("random");
    delete zombie2;
    Zombie *zombieGroup(zombieHorde(5, "horde"));
    delete[] zombieGroup;
}