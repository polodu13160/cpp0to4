/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-petr <pde-petr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 00:21:23 by pde-petr          #+#    #+#             */
/*   Updated: 2026/01/29 15:58:18 by pde-petr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HPP_ICE
#define HPP_ICE

#include "AMateria.hpp"

class Ice : public AMateria
{
public:
    Ice();
    Ice(const Ice &cpy);
    Ice &operator=(const Ice &cpy);
    ~Ice();
    AMateria *clone() const;
    void use(ICharacter &target);
};

#endif