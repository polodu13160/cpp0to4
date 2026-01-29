/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-petr <pde-petr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/17 13:49:23 by pde-petr          #+#    #+#             */
/*   Updated: 2026/01/21 22:53:22 by pde-petr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HPP_ANIMAL
#define HPP_ANIMAL

#include "string"

class Animal
{
    protected:
        std::string _type;
    public: 
        Animal();
        Animal(Animal &cpy);
        virtual const std::string getType() const = 0;
        Animal &operator=(const Animal &cpy);
        virtual ~Animal();
        virtual void makeSound() const = 0;
};

#endif