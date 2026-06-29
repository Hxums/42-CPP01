/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcissoko <hcissoko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/28 20:16:41 by hcissoko          #+#    #+#             */
/*   Updated: 2026/06/29 18:03:18 by hcissoko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "Harl.hpp"

Harl::Harl(void){}
Harl::~Harl(void){}

void	Harl::debug(void)
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!\n" << std::endl;
}	
void	Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!\n" << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I've been coming for years, whereas you started working here just last month.\n" << std::endl;
}

void	Harl::error(void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void	Harl::complain(std::string level)
{
	FunctionPointer functions[4] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int	i;
	for (i = 0; i < 5; i++)
	{
		if (levels[i].compare(level) == 0)
			break;
	}
	switch (i)
	{
		case 0:
			(this->*functions[0])();
			std::cout << "[" << levels[0] << "]" << std::endl;
			__attribute__ ((fallthrough));
		case 1:
			std::cout << "[" << levels[1] << "]" << std::endl;
			(this->*functions[1])();
			__attribute__ ((fallthrough));
		case 2:
			std::cout << "[" << levels[2] << "]" << std::endl;
			(this->*functions[2])();
			[[fallthrough]];
		case 3:
			std::cout << "[" << levels[3] << "]" << std::endl;
			(this->*functions[3])();
			break;
		default:
			std::cout << "Probably complaining about insignificant problem" << std::endl;
			break;
	}
}