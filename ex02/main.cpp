/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcissoko <hcissoko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/25 16:05:16 by hcissoko          #+#    #+#             */
/*   Updated: 2026/06/25 16:12:09 by hcissoko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int	main(void)
{
	std::string		string = "HI THIS IS BRAIN";
	std::string*	stringPTR = &string;
	std::string& 	stringREF = string;

	std::cout << "string address :" << &string << std::endl;
	std::cout << "stringPTR address :" << stringPTR << std::endl;
	std::cout << "stringREF address :" << &stringREF << std::endl;

	
	std::cout << "string value :" << string << std::endl;
	std::cout << "stringPTR value :" << *stringPTR << std::endl;
	std::cout << "stringREF value :" << stringREF << std::endl;

}