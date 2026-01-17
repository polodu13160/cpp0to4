/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-petr <pde-petr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 14:18:04 by pde-petr          #+#    #+#             */
/*   Updated: 2025/10/16 14:57:32 by pde-petr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>

std::string modif_string(std::string &line, std::string &s1, std::string &s2)
{
    std::size_t value = 0;
    if (s1.length() == 0)
        return line;
    while ((value=line.find(s1, value)) != line.npos)
    {   
        line.erase(value, s1.length());
        line.insert(value, s2);
    }
    return line;
}

int main(int argc, char **argv)
{
    if (argc != 4)
        return 1;
    std::string content_final;
    std::string s1(argv[2]);
    std::string s2(argv[3]);

    std::ifstream input_stream(argv[1]);
    if (input_stream.is_open() == 0)
    {
        std::cout << "file is not open" << std::endl;
        return 1;
    }
    std::string line;
    while (getline(input_stream, line))
    {
        content_final.append(modif_string(line, s1, s2));
        if (input_stream.eof() == 1)
            break;
        content_final.append("\n");
    }
    std::string name_new_file(argv[1]);
    std::ofstream new_file(name_new_file.append(".replace").c_str());
    if (new_file.is_open() == 0)
    {
        std::cout << "file is not open" << std::endl;
        return 1;
    } 
    new_file.write(content_final.c_str(), content_final.length());
    return 0;
}