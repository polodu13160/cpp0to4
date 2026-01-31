/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-petr <pde-petr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 15:22:47 by pde-petr          #+#    #+#             */
/*   Updated: 2026/01/31 17:22:21 by pde-petr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HPP_WRONGCAT
#define HPP_WRONGCAT

#include "string"

#include "WrongAnimal.hpp"
class WrongCat : public WrongAnimal
{
    public: 
        WrongCat();
        const std::string getType() const;
        WrongCat(const WrongCat &cpy); 
        ~WrongCat();
        WrongCat &operator=(const WrongCat &cpy);
        void makeSound() const;
};

#endif