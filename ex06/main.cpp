/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcissoko <hcissoko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/28 21:00:13 by hcissoko          #+#    #+#             */
/*   Updated: 2026/06/28 21:45:10 by hcissoko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <string>
#include <iostream>

int	main(int argc, char **argv)
{
	if (argc > 2)
		std::cout << "You're complaining too much !" << std::endl;
	else if (argc < 2)
		std::cout << "You should complain !" << std::endl;
	else
	{
		Harl h;
		h.complain(argv[1]);
	}
}