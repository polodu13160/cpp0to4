/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-petr <pde-petr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 12:53:11 by pde-petr          #+#    #+#             */
/*   Updated: 2025/10/08 11:07:08 by pde-petr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_BOOK_HPP
#define PHONE_BOOK_HPP
#include "Contact/Contact.hpp"

class PhoneBook
{

public:
    PhoneBook();
    void action();
    void print_contact();

private:
    int _i;
    static const int CONTACTS_MAX = 8;
    static const std::string QUESTIONS[5]; 
    Contact Contacts[CONTACTS_MAX];
    void add_contact();
    void search_contact();
};

#endif