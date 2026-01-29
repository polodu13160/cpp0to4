/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-petr <pde-petr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/17 13:55:39 by pde-petr          #+#    #+#             */
/*   Updated: 2026/01/20 18:23:56 by pde-petr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef HPP_CAT
#define HPP_CAT

#include "string"

#include "Animal.hpp"
class Cat : public Animal
{
    public: 
        Cat();
        const std::string getType() const;
        Cat &operator=(const Cat cpy);
        Cat(Cat &cpy); 
        ~Cat();
        void makeSound() const;
};

#endif