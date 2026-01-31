/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-petr <pde-petr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 15:19:59 by pde-petr          #+#    #+#             */
/*   Updated: 2026/01/31 15:14:56 by pde-petr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
    ClapTrap tutu("toto");
    ScavTrap toto("tutu");
    FragTrap fufu("fufu");

    tutu.attack("mouse");
    toto.attack("mouse");
    tutu.attack("mouse");
    toto.attack("mouse");
    tutu.attack("mouse");
    tutu.beRepaired(10);
    toto.beRepaired(20);
    tutu.beRepaired(10);
    toto.beRepaired(20);
    tutu.beRepaired(10);
    toto.beRepaired(20);
     tutu.attack("mouse");
    toto.attack("mouse");
    tutu.attack("mouse");
    toto.attack("mouse");
    tutu.attack("mouse");
    tutu.beRepaired(10);
    toto.beRepaired(20);
    tutu.beRepaired(10);
    toto.beRepaired(20);
    tutu.beRepaired(10);
    toto.beRepaired(20);
     tutu.attack("mouse");
    toto.attack("mouse");
    tutu.attack("mouse");
    toto.attack("mouse");
    tutu.attack("mouse");
    tutu.beRepaired(10);
    toto.beRepaired(20);
    tutu.beRepaired(10);
    toto.beRepaired(20);
    tutu.beRepaired(10);
    toto.beRepaired(20);
    toto.guardGate();
    tutu.takeDamage(10);
    fufu.highFivesGuys();
    fufu.attack("mouse");
}