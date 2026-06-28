/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcissoko <hcissoko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/25 15:30:21 by hcissoko          #+#    #+#             */
/*   Updated: 2026/06/25 15:36:19 by hcissoko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


int	main(void)
{
	Zombie*	z = newZombie("Jack");
	z->announce();
	randomChump("John");
	delete z;
	return (0);	
}