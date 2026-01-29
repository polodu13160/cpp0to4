/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-petr <pde-petr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 13:29:06 by pde-petr          #+#    #+#             */
/*   Updated: 2026/01/29 19:06:34 by pde-petr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "interfaces/IMateriaSource.hpp"
#include "AMateria.hpp"

#define NB_LEARNMATERIA 4

class MateriaSource : public IMateriaSource
{
private:
    AMateria *_materia[4];
    
    
public:
    MateriaSource();
    ~MateriaSource();
    MateriaSource(const MateriaSource &cpy);
    MateriaSource &operator=(MateriaSource &cpy);
    
    virtual void learnMateria(AMateria *);
    virtual AMateria *createMateria(std::string const &type);
};