/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-petr <pde-petr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 14:56:41 by pde-petr          #+#    #+#             */
/*   Updated: 2025/10/08 11:17:01 by pde-petr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact/Contact.hpp"
#include "iostream"
#include "sstream"
#include "iomanip"
#include "tools/tools.hpp"

const std::string PhoneBook::QUESTIONS[5] = {"Enter the first name :", "Enter the last name :", "Enter the nick name :", "Enter the phone number : ", "Enter the darkest secret :"};

PhoneBook::PhoneBook()
{
    this->_i = 1;
    this->action();
}

void PhoneBook::print_contact()
{

    std::cout << std::setw(10)
              << "ID"
              << '|' << std::setw(10)
              << "FIRST NAME"
              << '|' << std::setw(10)
              << "LAST NAME"
              << '|' << std::setw(10)
              << "NICK NAME"
              << std::endl;
    for (int i = 0; i < this->CONTACTS_MAX; i++)
    {
        if (this->Contacts[i].get_init() == 1)
            this->Contacts[i].print_for_table();
    }
}

void PhoneBook::action()
{
    std::string select;
    print_message("ADD/SEARCH/EXIT :");
    while (std::getline(std::cin, select))
    {
        if (select.compare("SEARCH") == 0)
            this->search_contact();
        else if (select.compare("ADD") == 0)
            this->add_contact();
        if (select.compare("EXIT") == 0 || std::cin.eof() == 1)
            break;
        print_message("ADD/SEARCH/EXIT :");
    }
}

void PhoneBook::add_contact()
{
    int id_contact;
    std::string answer[5];
    std::string first_name;
    std::string last_name;
    std::string nick_name;
    std::string phone_number;
    std::string darkest_secret;
    if (this->_i <= PhoneBook::CONTACTS_MAX)
        id_contact = this->_i;
    else
        id_contact = this->_i = 1;
    for (int j = 0; j < 5; j++)
    {
        if (std::cin.eof() == 1)
            break;
        print_message(this->QUESTIONS[j]);
        std::getline(std::cin, answer[j]);
        if (std::cin.eof() != 1 && answer[j].empty() == 1)
        {
            print_error_message("the input is empty !");
            j--;
        }
    }
    this->Contacts[_i - 1] = Contact(id_contact, answer[0], answer[1], answer[2], answer[3], answer[4]);
    this->_i++;
}

void PhoneBook::search_contact()
{
    Contact *contact_find = NULL;
    std::string select;

    this->print_contact();
    print_message("Enter a id :");
    int value;
    std::getline(std::cin, select);
    if (std::cin.eof() == 1)
        return;
    std::stringstream ss(select);
    ss >> value;
    if (ss.fail() || ss.eof() == 0)
        return print_error_message("this id is not valid !");
    if (value < 1 || value > 8)
    {
        return print_error_message("this id is not included between 1 and 8 !");
    }
    if (this->Contacts[value - 1].get_init() == true)
    {
        if (this->Contacts[value - 1].get_id() == value)
            contact_find = &this->Contacts[value - 1];
    }
    if (contact_find == NULL)
        print_error_message("this id does not exist!");
    else
        contact_find->print_search();
}
