/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-petr <pde-petr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 10:39:23 by pde-petr          #+#    #+#             */
/*   Updated: 2025/10/09 15:02:30 by pde-petr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "string"
#include "iostream"

const std::string Zombie::SPEAK = "BraiiiiiiinnnzzzZ";

Zombie::Zombie(std::string name)
{
    this->name = name;
    this->announce();
}

Zombie::Zombie()
{
}

Zombie::~Zombie()
{
    std::cout << name + ": is destroyed" << std::endl;
}

void Zombie::announce()
{
    std::cout << this->name + ": " + this->SPEAK << std::endl;
}

void Zombie::setName(std::string name)
{
    this->name = name;
}