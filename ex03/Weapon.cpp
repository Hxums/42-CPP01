/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcissoko <hcissoko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/25 16:45:45 by hcissoko          #+#    #+#             */
/*   Updated: 2026/06/25 17:01:21 by hcissoko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
	this->_type = type;
}

Weapon::~Weapon(void){}

std::string	Weapon::getType(void)
{
	return 	this->_type;
}


void	Weapon::setType(std::string type)
{
	this->_type = type;
}