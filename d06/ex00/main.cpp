/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbogar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/12 14:30:11 by sbogar            #+#    #+#             */
/*   Updated: 2017/07/12 22:06:05 by sbogar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int		main( int ac, char **av )
{
	char	c;

	if (ac == 2)
	{
		std::string	str(av[1]);

		if (!atoi(av[1]) && av[1][0] != '0')
		{
			std::cout << "char: impossible" << std::endl;
			std::cout << "int: impossible" << std::endl;
			if (str == "nan" || str== "nanf")
			{
				std::cout << "float: nanf" << std::endl;
				std::cout << "double: nan" << std::endl;
			}
			else if ( str == "-inff" || str == "-inf" )
			{
				std::cout << "float: -inff" << std::endl;
				std::cout << "double: -inf" << std::endl;
			}
			else if ( str == "+inff" || str == "+inf" )
			{
				std::cout << "float: +inff" << std::endl;
				std::cout << "double: +inf" << std::endl;
			}
			else
			{
				std::cout << "float: impossible" << std::endl;
				std::cout << "double: impossible" << std::endl;
			}
		}
		else
		{
			std::string str;
			tmp = atoi(av[1])
				
			c = static_cast<char>(atoi(av[1]));
			str = std::to_string(atof(av[1]));

			if (isprint(c))
				std::cout << "char: '" << c << "'" << std::endl;
			else
				std::cout << "char: Non displayable" << std::endl;

			std::cout << "as an int: " << atoi(av[1]) << std::endl;

	    	std::string::iterator it = str.end() - 1;
			while (*it == '0')
				*it--;
			if (*it == '.')
				it++;
			it++;
			str.erase(it, str.end());
			str.append(1, 'f');
			std::cout << "as a float: " << str << std::endl;

			str =  std::to_string(strtod(av[1], 0 ));
	    	it = str.end() - 1;
			while (*it == '0')
				*it--;
			if (*it == '.')
				it++;
			it++;
			str.erase(it, str.end());
			std::cout << "as a double: " << str << std::endl;
			
		}
	}
	else
		std::cout << "invalid number of arguments" << std::endl;

	return (0);
}
