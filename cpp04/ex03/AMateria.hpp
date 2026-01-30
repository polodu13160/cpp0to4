/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-petr <pde-petr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 00:12:52 by pde-petr          #+#    #+#             */
/*   Updated: 2026/01/29 16:08:15 by pde-petr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HPP_AMATERIA
#define HPP_AMATERIA

#include "string"


class ICharacter;

class AMateria 
{
protected:
    std::string _type;

public:
    AMateria(std::string const &type);
    AMateria();
    AMateria &operator=(AMateria &cpy);
    virtual ~AMateria(); 
    std::string const &getType() const;
    virtual AMateria *clone() const = 0;
    virtual void use(ICharacter &target);

private:
};

#endif