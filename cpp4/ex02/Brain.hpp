/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-petr <pde-petr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 11:46:02 by pde-petr          #+#    #+#             */
/*   Updated: 2026/01/21 00:45:42 by pde-petr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HPP_BRAIN
#define HPP_BRAIN
#include "string"

class Brain 
{
    private :
        std::string _ideas[100];
    public :
    Brain();
    Brain(const Brain &cpy);
    Brain &operator=(const Brain &cpy);
    ~Brain();
    void setIdeas(std::string key, int index);
    std::string getIdeas(int index) const;
    
};

#endif