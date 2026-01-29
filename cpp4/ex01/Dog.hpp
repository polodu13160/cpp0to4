/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-petr <pde-petr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/17 13:55:47 by pde-petr          #+#    #+#             */
/*   Updated: 2026/01/21 01:57:01 by pde-petr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HPP_DOG
#define HPP_DOG

#include "string"
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
private : 
    Brain *_ideas;
public:
    Dog();
    Dog(const Dog &cpy);
    const std::string getType() const;
    ~Dog();
    Dog &operator=(const Dog cpy);
    Brain &inBrain();
    void makeSound() const;
};

#endif