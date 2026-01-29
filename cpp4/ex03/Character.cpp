/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-petr <pde-petr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 12:19:57 by pde-petr          #+#    #+#             */
/*   Updated: 2026/01/29 19:06:17 by pde-petr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "iostream"

Character::Trash *Character::_trash = NULL;

Character::Character()
{
    std::cout << "Character is created" << std::endl;

    for (int i = 0; i < NB_INVENTORY; i++)
        _inventory[i] = NULL;
}

Character::Character(std::string name) : _name(name)
{
    std::cout << "Character is created with cpy" << std::endl;

    for (int i = 0; i < NB_INVENTORY; i++)
        _inventory[i] = NULL;
}
Character &Character::operator=(const Character &cpy)
{
    std::cout << "Character is created with cpy" << std::endl;
    _name = cpy._name;

    for (int i = 0; i < NB_INVENTORY; i++)
        _inventory[i] = cpy._inventory[i]->clone();
    return *this;
}

Character::~Character()
{
    std::cout << "Character is deleted" << std::endl;
    for (int i = 0; i < NB_INVENTORY; i++)
    {
        if (this->_inventory[i])
            delete this->_inventory[i];
    }
}

std::string const &Character::getName() const
{
    return _name;
}
void Character::equip(AMateria *m)
{
    for (int i = 0; i < NB_INVENTORY; i++)
    {
        if (this->_inventory[i] == NULL)
        {
            this->_inventory[i] = m;
            std::cout << "the equipment " << this->_inventory[i]->getType() << " is equiped in slot " << i << std::endl;
            return;
        }
    }
}
void Character::unequip(int idx)
{
    if (idx >= 0 && idx < NB_INVENTORY)
    {
        if (this->_inventory[idx] != NULL)
        {
            if (_trash == NULL)
            {
                _trash = new Trash;
                _trash->materia = this->_inventory[idx];
                _trash->next = NULL;
                std::cout << "the equipment " << this->_inventory[idx]->getType() << " is unequiped " << std::endl;
                this->_inventory[idx] = NULL;
                return;
            }
            Trash *tmp = _trash;
            while (true)
            {
                if (tmp->next == NULL)
                {
                    tmp->next = new Trash;
                    tmp->next->materia = this->_inventory[idx];
                    tmp->next->next = NULL;
                    std::cout << "the equipment " << this->_inventory[idx]->getType() << " is unequiped " << std::endl;
                    this->_inventory[idx] = NULL;
                    return;
                }
                tmp = tmp->next;
            }
        }
    }
    std::cout << "idx don´t exist" << std::endl;
}

void Character::deleteTrash()
{
    Trash *tmp2;
    for (Trash *tmp = _trash; 1;)
    {
        if (tmp == NULL)
        {
            _trash = NULL;
            return;
        }
        else
        {
            tmp2 = tmp;
            tmp = tmp->next;
            delete tmp2->materia;
            delete tmp2;
            tmp2 = NULL;
        }
    }
    
}
void Character::use(int idx, ICharacter &target)
{
    if (idx >= 0 && idx < NB_INVENTORY)
    {
        if (this->_inventory[idx] != NULL)
        {
            this->_inventory[idx]->use(target);
        }
    }
}
