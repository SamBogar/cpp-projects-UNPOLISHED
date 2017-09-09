/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_it.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbogar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/03 17:09:59 by sbogar            #+#    #+#             */
/*   Updated: 2017/07/03 19:51:36 by sbogar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get.hpp"
#include "phonebook.hpp"
#include <stdlib.h>

void print_col(std::string str, int is_end)
{
	int		str_len;
	int		i;
	int		j;

	i = 0;
	j = 0;
	str_len = str.size();
	while (i < 10 - str_len)
	{
		std::cout << " ";
		i++;
	}
	while (i <= 10)
	{
		if (str_len > 10 && i == 9)
		{
			std::cout << ".";
			break ;
		}
		else
			std::cout << str[j];
		i++;
		j++;
	}
	if (is_end)
		std::cout << std::endl;
	else
		std::cout << "|";
}

static void	show_contact(Contact users[8], int i)
{
	std::cout << users[i].get_first() << std::endl;
	std::cout << users[i].get_last() << std::endl;
	std::cout << users[i].get_nickname() << std::endl;
	std::cout << users[i].get_login() << std::endl;
	std::cout << users[i].get_address() << std::endl;
	std::cout << users[i].get_email() << std::endl;
	std::cout << users[i].get_phone() << std::endl;
	std::cout << users[i].get_brthdy() << std::endl;
	std::cout << users[i].get_fvrt_ml() << std::endl;
	std::cout << users[i].get_undr_clr() << std::endl;
	std::cout << users[i].get_secret() << std::endl;
}

static void	show_table(Contact users[8], int i)
{
	std::cout << "         ";
	std::cout << i;
	std::cout << "|";
	print_col(users[i].get_first(), 0);
	print_col(users[i].get_last(), 0);
	print_col(users[i].get_nickname(), 1);
}

void		print_it(Contact users[8])
{
	int		i;
	char	buff[255];

	i = -1;
	std::cout << "     index|first name| last name|  nickname" << std::endl;
	while (users[++i].get_is_assigned() && i < 8)
		show_table(users, i);
	std::cout << "Which index # would you like more information on?" << std::endl;
	std::cin >> buff;
	if (buff[0] >= i + '0' || buff[0] < '0')
	{
		std::cout << "Oh come on, that doesn't even make sense" << std::endl;
		return ;
	}
	i = buff[0] - '0';
	show_contact(users, i);
}
