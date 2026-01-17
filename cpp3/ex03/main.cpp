/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-petr <pde-petr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 15:19:59 by pde-petr          #+#    #+#             */
/*   Updated: 2026/01/17 12:39:47 by pde-petr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "DiamondTrap.hpp"

int main()
{
    ClapTrap tutu("toto");
    ScavTrap toto("tutu");
    DiamondTrap fefe("fefe");
    DiamondTrap trutut("A");
    DiamondTrap ijfi("B");

    trutut = ijfi;

    trutut.whoAmI();

    fefe.whoAmI();
    fefe.attack("pioupiou");
}