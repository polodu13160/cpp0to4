/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-petr <pde-petr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/17 13:55:39 by pde-petr          #+#    #+#             */
/*   Updated: 2026/01/21 00:54:05 by pde-petr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef HPP_CAT
#define HPP_CAT

#include "string"

#include "Animal.hpp"
#include "Brain.hpp"
class Cat : public Animal
{
    private: 
        Brain* _ideas;
    public: 
        Cat();
        const std::string getType() const;
        Cat &operator=(const Cat cpy);
        Cat(const Cat &cpy); 
        ~Cat();
        void makeSound() const;
};

#endif