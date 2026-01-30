/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-petr <pde-petr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/17 13:49:16 by pde-petr          #+#    #+#             */
/*   Updated: 2026/01/21 22:55:12 by pde-petr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"
#include <iostream>

int main()
{
    Animal **d = new Animal *[100];

    for (int i = 0; i < 100; i++)
    {
        // if (i == 0)
        // {
        //     d[i] = new Animal();
        // }
        if (i < 50)
            d[i] = new Cat();
        else
            d[i] = new Dog();
        if (i == 50)
        {
            std::cout << "\n \n itś time to test shadow copy \n \n " << std::endl;
            Dog* DogRecast = static_cast<Dog*>(d[i]);
            DogRecast->inBrain().setIdeas("helo im wouf\n",0);
            Dog *newValue = new Dog(*DogRecast);
            delete newValue;
            std::cout << DogRecast->inBrain().getIdeas(0) << std::endl;
        }
    }
    for (int i = 0; i < 100; i++)
    {
        delete d[i];
    }
    delete[] d;
    return 0;
}
