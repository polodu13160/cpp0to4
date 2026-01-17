/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-petr <pde-petr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 12:50:25 by pde-petr          #+#    #+#             */
/*   Updated: 2025/10/07 19:23:14 by pde-petr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#ifndef CONTACT_HPP
#define CONTACT_HPP

class Contact
{

public:
    Contact();
    Contact(int id, std::string first_name, std::string last_name, std::string nick_name, std::string phone_number, std::string darkest_secret);
    std::string get_nick_name();
    std::string get_last_name();
    std::string get_first_name();
    void print_for_table();
    void print_search();
    bool get_init();
    int get_id();
    
    
private:
    bool init;
    int _id;
    std::string _first_name;
    std::string _last_name;
    std::string _nick_name;
    std::string _phone_number;
    std::string _darkest_secret;
};

#endif