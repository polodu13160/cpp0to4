/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-petr <pde-petr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 20:13:02 by pde-petr          #+#    #+#             */
/*   Updated: 2025/10/22 11:28:23 by pde-petr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

const std::string Harl::name_tab::DEBUG("DEBUG");
const std::string Harl::name_tab::INFO("INFO");
const std::string Harl::name_tab::WARNING("WARNING");
const std::string Harl::name_tab::ERROR("ERROR");

void Harl::debug(void)
{
    std::cout << "I love having extra bacon for my XXXXXXXXXL BURGER" << std::endl;
}
void Harl::info(void)
{
    std::cout << "I cannot believe adding extra bacon cost more money." << std::endl;
}
void Harl::warning(void)
{
    std::cout << "I think I deserve to have some extra bacon for free" << std::endl;
}
void Harl::error(void)
{
    std::cout << "This is unacceptable !" << std::endl;
}

void Harl::complain(std::string level)
{
    static std::string name_tab[] = {Harl::name_tab::DEBUG, Harl::name_tab::INFO, Harl::name_tab::WARNING, Harl::name_tab::ERROR};
    static Harl::func_ptr func_tab[] = {&Harl::debug,
                                        &Harl::info,
                                        &Harl::warning,
                                        &Harl::error};
    for (int i = 0; i < 4 || (i > 0 && name_tab[i - 1] == level); i++)
    {
        if (name_tab[i] == level)
            (this->*func_tab[i])();
    }
}
