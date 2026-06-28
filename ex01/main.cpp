/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcissoko <hcissoko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/25 15:30:21 by hcissoko          #+#    #+#             */
/*   Updated: 2026/06/25 16:04:29 by hcissoko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


int	main(void)
{
	int	N = 3;
	Zombie*	z = zombieHorde(N, "Jack");
	for (int i = 0; i < N; i++)
	{
		z[i].announce();
	}
	delete[] z;
}