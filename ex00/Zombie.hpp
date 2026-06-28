/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcissoko <hcissoko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/24 17:46:00 by hcissoko          #+#    #+#             */
/*   Updated: 2026/06/25 15:19:33 by hcissoko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

// ************************************************************************** //
//                               Zombie Class                                 //
// ************************************************************************** //

#include <string>

class Zombie {
	private:
		std::string _name;
	public:
		Zombie(std::string _name);
		~Zombie( void );
		void announce( void ); 
};

Zombie*	newZombie(std::string name);
void	randomChump(std::string name);

#endif
