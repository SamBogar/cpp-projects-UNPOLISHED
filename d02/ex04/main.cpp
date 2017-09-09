/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbogar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/06 22:30:44 by sbogar            #+#    #+#             */
/*   Updated: 2017/07/06 23:04:43 by sbogar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.class.hpp"

Fixed	get_Fixed( char *stri)
{
}

Fixed	operand(char type, Fixed res[50], int j)
{
	if (type == '+')
		return Fixed (res[j - 1] + res[j]
	else if (type == '-')
	else if (type == '*')
	else
}

Fixed	eval_expr( char *str)
{
	int i = 0;
	int j = 0;
	Fixed	res[50];

	while (str[i])
	{
		while (str[i] == ' ')
			i++;
		if (str[i] == '(')
			eval_expr( str + i + 1);
		else if (str[i] == ')' )
			return (res[0]);
		else if ( str[i] >= '0' && str[i] <= '9' )
		{
			res[j++] = get_Fixed( str + i );
			while (( i >= '0' && str[i] <= '9') || str[i] == '.')
				i++;
		}
		if (str[i] == '+' || str[i] == '-' || str[i] == '/' || str[i] == '*')
			res[j - 1] = operand(str[i], res, j);
	}
}

int main(int ac, char** av)
{
	if (ac == 2)
		eval_expr (av[1]);
	else
		std::cout << "Check yo' input, dawg" << std::endl;

	return (0);
}
