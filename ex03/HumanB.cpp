/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcissoko <hcissoko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/25 18:38:21 by hcissoko          #+#    #+#             */
/*   Updated: 2026/06/25 19:47:19 by hcissoko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "HumanB.hpp"
#include "Weapon.hpp"

HumanB::HumanB(std::string name)
{
	this->_name = name;
	this->_weapon = NULL;
}
HumanB::~HumanB(void){}

void	HumanB::attack(void)
{
	std::cout << this->_name << " attacks with ";
	if (!this->_weapon)
	{
		std::cout << "his bare hands." << std::endl;
	}
	else
	{
		std::cout << (*this->_weapon).getType() << std::endl;
	}
}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->_weapon = &weapon;
}
