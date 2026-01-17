/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-petr <pde-petr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 14:57:37 by pde-petr          #+#    #+#             */
/*   Updated: 2025/10/08 11:08:42 by pde-petr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "tools/tools.hpp"
#include "iomanip"

Contact::Contact()
{
    this->init = false;
}

void Contact::print_search()
{
    std::string delimitors(20, '-');
    std::cout << std::setw(20) << delimitors << COLORPRINT << std::endl;
    std::cout << std::setw(20) << "ID : " << COLORPRINT << this->_id << std::endl;
    std::cout << std::setw(20) << "FIRST NAME : " << COLORPRINT << this->_first_name << std::endl;
    std::cout << std::setw(20) << "LAST NAME : " << COLORPRINT << this->_last_name << std::endl;
    std::cout << std::setw(20) << "NICK NAME : " << COLORPRINT << this->_nick_name << std::endl;
    std::cout << std::setw(20) << "PHONE NUMBER : " << COLORPRINT << this->_phone_number << std::endl;
    std::cout << std::setw(20) << "DARKEST SECRET : " << COLORPRINT << this->_darkest_secret << std::endl;
    std::cout << COLORNORMAL << std::setw(20) << delimitors << std::endl;
}

void Contact::print_for_table()
{
    std::cout << std::setw(10)
              << this->_id
              << '|' << std::setw(10)
              << (this->_first_name.size() < 10 ? this->_first_name : this->_first_name.substr(0, 9) + '.')
              << '|' << std::setw(10)
              << (this->_last_name.size() < 10 ? this->_last_name : this->_last_name.substr(0, 9) + '.')
              << '|' << std::setw(10)
              << (this->_nick_name.size() < 10 ? this->_nick_name : this->_nick_name.substr(0, 9) + '.')
              << std::endl;
}

Contact::Contact(int id, std::string first_name, std::string last_name, std::string nick_name, std::string phone_number, std::string darkest_secret)
{
    this->_darkest_secret = darkest_secret;
    this->_first_name = first_name;
    this->_last_name = last_name;
    this->_phone_number = phone_number;
    this->_nick_name = nick_name;
    this->init = true;
    this->_id = id;
}

std::string Contact::get_first_name()
{
    return this->_first_name;
}

std::string Contact::get_last_name()
{
    return this->_last_name;
}

std::string Contact::get_nick_name()
{
    return this->_nick_name;
}

int Contact::get_id()
{
    return this->_id;
}

bool Contact::get_init()
{
    return (this->init);
}
