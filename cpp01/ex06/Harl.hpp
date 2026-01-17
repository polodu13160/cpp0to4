/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-petr <pde-petr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 20:10:26 by pde-petr          #+#    #+#             */
/*   Updated: 2025/10/15 18:40:17 by pde-petr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include "iostream"

class Harl
{

private:
    void debug(void);
    void info(void);
    void warning(void);
    void error(void);

public:
    void complain(std ::string level);
    typedef void (Harl::*func_ptr)(void);
    struct name_tab
    {
        static const std::string DEBUG;
        static const std::string INFO;
        static const std::string WARNING;
        static const std::string ERROR;
    };
};

#endif