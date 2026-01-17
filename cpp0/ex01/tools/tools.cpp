/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-petr <pde-petr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/05 16:50:20 by pde-petr          #+#    #+#             */
/*   Updated: 2025/10/05 16:56:41 by pde-petr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tools.hpp"

void print_message(std::string message)
{
    std::cout << COLORPRINT << message << COLORNORMAL << std::endl;
}
void print_error_message(std::string message)
{
    std::cout << COLORERROR << message << COLORNORMAL << std::endl; 
}