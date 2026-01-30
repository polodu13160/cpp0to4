/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-petr <pde-petr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 15:24:34 by pde-petr          #+#    #+#             */
/*   Updated: 2026/01/20 18:29:29 by pde-petr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef HPP_WRONGANIMAL
#define HPP_WRONGANIMAL

#include "string"

class WrongAnimal
{
    protected:
        std::string _type;
    public: 
        WrongAnimal();
        WrongAnimal(WrongAnimal &cpy);
        const std::string getType() const;
        WrongAnimal &operator=(const WrongAnimal &cpy);
        ~WrongAnimal();
        void makeSound() const;
};

#endif