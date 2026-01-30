/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-petr <pde-petr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 13:29:03 by pde-petr          #+#    #+#             */
/*   Updated: 2026/01/29 19:06:47 by pde-petr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "iostream"

void MateriaSource::learnMateria(AMateria *val)
{
    for (int i = 0; i < NB_LEARNMATERIA; i++)
    {
        if (this->_materia[i] == NULL)
        {
            this->_materia[i] = val;
            std::cout << "MateriaSource learn new Materia" << std::endl;
            return;
        }
    }
    delete val;
    std::cout << "Materia not learned and deleted" << std::endl;
}
AMateria *MateriaSource::createMateria(std::string const &type)
{
    for (int i = 0; i < NB_LEARNMATERIA; i++)
    {
        if (this->_materia[i]->getType() == type)
        {
            std::cout << "MateriaSource create Materia " << type << std::endl;

            return this->_materia[i]->clone();
        }
    }
    std::cout << "MateriaSource don´t have this " << type << std::endl;
    return NULL;
}
MateriaSource::MateriaSource()
{
    std::cout << "MateriaSource is created" << std::endl;
    for (int i = 0; i < NB_LEARNMATERIA; i++)
        this->_materia[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource &cpy)
{
    std::cout << "MateriaSource is created with cpy" << std::endl;
    for (int i = 0; i < NB_LEARNMATERIA; i++)
    {
        if (this->_materia[i] != NULL)
            this->_materia[i] = cpy._materia[i]->clone();
        else
            this->_materia[i] = NULL;
    }
}
MateriaSource &MateriaSource::operator=(MateriaSource &cpy)
{
    std::cout << "MateriaSource is created with =" << std::endl;
    for (int i = 0; i < NB_LEARNMATERIA; i++)
    {
        if (this->_materia[i] != NULL)
            this->_materia[i] = cpy._materia[i]->clone();
        else
            this->_materia[i] = NULL;
    }
    return *this;
}

MateriaSource::~MateriaSource()
{
    std::cout << "MateriaSource is deleted" << std::endl;
    for (int i = 0; i < NB_LEARNMATERIA; i++)
    {
        if (this->_materia[i] != NULL)
            delete this->_materia[i];
    }
}
