/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-petr <pde-petr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 20:09:51 by pde-petr          #+#    #+#             */
/*   Updated: 2025/10/15 18:40:06 by pde-petr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"


int main()
{
    Harl harl;
    harl.complain(Harl::name_tab::INFO);
    harl.complain("AB");
    harl.complain("ERROR");
}