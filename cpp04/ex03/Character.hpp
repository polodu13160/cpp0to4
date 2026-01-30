/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-petr <pde-petr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 12:18:51 by pde-petr          #+#    #+#             */
/*   Updated: 2026/01/29 19:06:10 by pde-petr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "interfaces/ICharacter.hpp"

#define NB_INVENTORY 4
#define NB_TRASH_SIZE 1000

class Character : public ICharacter
{
private:
    std::string _name;
    AMateria *_inventory[NB_INVENTORY];
    struct Trash
    {
        Trash *next;
        AMateria *materia;        
    };
    static Trash *_trash;
    
   
    
    
   
public:
    Character();
    ~Character();
    Character(std::string name);
    Character &operator=(const Character &cpy);
    std::string const & getName() const;
    void equip(AMateria* m);
    void unequip(int idx);
    void use(int idx, ICharacter& target);
    static void deleteTrash();
    
};

