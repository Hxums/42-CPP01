/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcissoko <hcissoko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/28 18:25:41 by hcissoko          #+#    #+#             */
/*   Updated: 2026/06/28 19:42:26 by hcissoko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>


int	main(int argc, char **argv)
{
	std::string line;
	std::string new_line;
	size_t		index;
	size_t		found;

	if (argc < 4 || argc > 4)
	{
		std::cout << "3 args are required !" << std::endl;
		return 1;
	}

	std::ifstream input_file(argv[1]);
	if (!input_file)
	{
		std::cout << "Can't read " << argv[1] << std::endl;
		return 1;
	}
	std::string outfile_name = argv[1];
	outfile_name += ".replace";
	std::string	s1;
	std::string	s2;
	s1 = argv[2];
	s2 = argv[3];
	if (s1.empty())
	{
		std::cout << "Cannot replace with empty string !" << std::endl;
		return (1);		
	}
	std::ofstream output_file(outfile_name.c_str());
	if (!output_file)
	{
		std::cout << "Error with " << outfile_name << std::endl;
		return 1;
	}
	while (std::getline(input_file, line))
	{
		new_line = "";
		index = 0;
		while ((found = line.find(s1, index)) != std::string::npos)
		{
			new_line += line.substr(index, found - index) + s2;
			index = found + s1.length();
		}
		new_line += line.substr(index);
		output_file << new_line << std::endl; 
	}
	return 0;
}