/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-petr <pde-petr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 13:19:59 by pde-petr          #+#    #+#             */
/*   Updated: 2026/01/29 19:01:31 by pde-petr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "IMateriaSource.hpp"
#include "iostream"

IMateriaSource::~IMateriaSource()
{
    std::cout << "IMateriaSource is deleted" << std::endl;
}