/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-petr <pde-petr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 00:27:18 by pde-petr          #+#    #+#             */
/*   Updated: 2026/01/29 14:34:28 by pde-petr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HPP_CURE
#define HPP_CURE
#include "AMateria.hpp"
class Cure : public AMateria
{
private:
public:
    Cure();
    Cure(const Cure &cpy);
    Cure &operator=(const Cure &cpy);
    ~Cure();
    AMateria *clone() const;
    void use(ICharacter &target);
};

#endif