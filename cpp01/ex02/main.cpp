/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-petr <pde-petr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 17:05:47 by pde-petr          #+#    #+#             */
/*   Updated: 2025/10/16 14:49:53 by pde-petr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string"
#include "iostream"
int main()
{
    std::string var("HI THIS IS BRAND");
    std::string *stringPTR = &var;

    std::string &stringREF = var;
    
    std::cout << "string adress :" << &var << std::endl;
    std::cout << "stringPTR adress:" << &stringPTR << std::endl;
    std::cout << "stringREF adress:" << &stringREF << std::endl;
    
    std::cout << "string value :" << var << std::endl;
    std::cout << "stringPTR value :" << *stringPTR << std::endl;
    std::cout << "stringREF value :" << stringREF << std::endl;
}