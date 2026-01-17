/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-petr <pde-petr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/05 16:53:09 by pde-petr          #+#    #+#             */
/*   Updated: 2025/10/05 17:12:26 by pde-petr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TOOLS_HPP
#define COLORERROR "\033[31m"
#define COLORPRINT "\033[92m"
#define COLORNORMAL "\033[0m"
#include "iostream"

void print_message(std::string message);
void print_error_message(std::string message);

#endif