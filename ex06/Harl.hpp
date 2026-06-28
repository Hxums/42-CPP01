/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcissoko <hcissoko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/28 20:13:08 by hcissoko          #+#    #+#             */
/*   Updated: 2026/06/28 20:45:15 by hcissoko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_CPP
#define HARL_CPP

#include <string>

class Harl
{
	private:
		void	debug(void);	
		void	info(void);	
		void	warning(void);	
		void	error(void);
	public:
		typedef void (Harl::*FunctionPointer)(void);
		Harl(void);
		~Harl(void);
		void	complain(std::string level);
};

#endif