/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-petr <pde-petr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/25 16:07:45 by pde-petr          #+#    #+#             */
/*   Updated: 2025/10/02 17:58:29 by pde-petr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int last_index_array(char** array)
{
    int count = 0;
    for (int i = 0;  array[i] != NULL; i++)
        count++;
    return count;   
}

int main(int argc, char **argv)
{
    if (argc < 2)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl ;
    else 
    {
        for (int i = 1; argv[i] != NULL; i++)
        {
            std::string arg(argv[i]);
            for (int j = 0; arg[j] != *(arg.end()) ; j++)
                arg[j] = ::toupper(arg[j]);
            std::cout << arg;
        }
        std::cout << std::endl;
    }
    return 0;
}