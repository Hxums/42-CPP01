/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcissoko <hcissoko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/25 16:51:41 by hcissoko          #+#    #+#             */
/*   Updated: 2026/06/25 19:17:12 by hcissoko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "HumanA.hpp"
#include "Weapon.hpp"

HumanA::HumanA(std::string name, Weapon& weapon) : _name(name), _weapon(weapon)
{
	this->_name = name;
	this->_weapon = weapon;
}
HumanA::~HumanA(void){}

void	HumanA::attack(void)
{
	std::cout << this->_name << " attacks with ";
	std::cout << this->_weapon.getType() << std::endl;
}
