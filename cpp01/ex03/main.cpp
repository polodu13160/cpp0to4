/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-petr <pde-petr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 18:14:05 by pde-petr          #+#    #+#             */
/*   Updated: 2025/10/22 11:27:14 by pde-petr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"
int main()
{
    Weapon Totor("Stack");
    Weapon *Tutor = new Weapon("Hype");
    HumanA A("Human A",Totor);
    HumanB B("Human B");
    A.attack();
    B.attack();
    B.set_weapon(Tutor);
    B.attack();
    Totor.setType("sdjdj");
    Tutor->setType("dfjkdf");
    B.attack();
    A.attack();
}