/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-petr <pde-petr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 00:34:26 by pde-petr          #+#    #+#             */
/*   Updated: 2026/01/29 19:09:24 by pde-petr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "interfaces/ICharacter.hpp"
#include "interfaces/IMateriaSource.hpp"
#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"

#include <iostream>


int main()
{
    IMateriaSource *src = new MateriaSource();
    Ice test;
    // Ice *tests = new Ice();
    // (void)tests;
    src->learnMateria(new Ice);
    src->learnMateria(new Cure());
    src->learnMateria(new Cure());
    src->learnMateria(new Cure());
    src->learnMateria(new Cure());
    src->learnMateria(new Ice);
    src->learnMateria(new Cure());
    src->learnMateria(new Cure());
    src->learnMateria(new Cure());
    src->learnMateria(new Cure());
    ICharacter *me = new Character("me");
    AMateria *tmp;
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);

    
    ICharacter *bob = new Character("bob");
    me->use(0, *bob);
    me->use(1, *bob);
    me->use(2, *bob);
    me->use(3, *bob);


    me->unequip(1);
    me->unequip(0);me->unequip(1);
    me->unequip(0);me->unequip(1);
    me->unequip(0);me->unequip(1);
    me->unequip(0);me->unequip(1);
    me->unequip(0);
    
    Character::deleteTrash();
    delete bob;
    delete me;
    delete src;
    return 0;
}