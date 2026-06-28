/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcissoko <hcissoko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/24 17:46:00 by hcissoko          #+#    #+#             */
/*   Updated: 2026/06/25 15:49:52 by hcissoko         ###   ########.fr       */
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
		Zombie();
		~Zombie( void );
		void announce( void ); 
		void setName(std::string name);
};

Zombie*	zombieHorde( int N, std::string name );

#endif
