/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-petr <pde-petr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/17 13:55:47 by pde-petr          #+#    #+#             */
/*   Updated: 2026/01/20 18:25:15 by pde-petr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HPP_DOG
#define HPP_DOG

#include "string"
#include "Animal.hpp"

class Dog : public Animal
{

public:
    Dog();
    Dog(Dog &cpy);
    const std::string getType() const;
    ~Dog();
    Dog &operator=(const Dog cpy);
    void makeSound() const;
};

#endif