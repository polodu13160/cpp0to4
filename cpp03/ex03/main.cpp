/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-petr <pde-petr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 15:19:59 by pde-petr          #+#    #+#             */
/*   Updated: 2026/01/31 15:39:43 by pde-petr         ###   ########.fr       */
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
    DiamondTrap test(trutut);

     test.whoAmI();

    trutut = ijfi;

   trutut.whoAmI();

   fefe.whoAmI();
   fefe.attack("pioupiou");
}