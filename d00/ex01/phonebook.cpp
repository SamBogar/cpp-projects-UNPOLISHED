/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbogar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/03 14:20:03 by sbogar            #+#    #+#             */
/*   Updated: 2017/07/03 17:29:54 by sbogar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "set.hpp"
#include "phonebook.hpp"
#include <string>

void		get_user_input(Contact users[8], int j)
{
	users[j].set_is_assigned(1);
	users[j].set_first();
	users[j].set_last();
	users[j].set_nickname();
	users[j].set_login();
	users[j].set_address();
	users[j].set_email();
	users[j].set_phone();
	users[j].set_brthdy();
	users[j].set_fvrt_ml();
	users[j].set_undr_clr();
	users[j].set_secret();
}

void		print_it(Contact users[8]);

int 		main(void )
{
	std::string buff;
	Contact	users[8];
	int		i;
	int		j;

	j = 0;
	while (j < 8)
		users[j++].set_is_assigned(0);
	j = 0;
	while (1)
	{
		std::cout << "Please type either 'ADD', 'SEARCH', OR 'EXIT'" << std::endl;
		i = 0;
		if ( !std::getline(std::cin, buff))
		{
			std::cout << "why would you even enter that" << std::endl;
			exit (0);
		}
		if (buff == "ADD" || buff == "add")
		{
			if (j < 8)
				get_user_input(users, j);
			else
				std::cout << "Bruh that's too many people, I'm freaking out" << std::endl;
			j++;
		}
		else if ( buff == "SEARCH" || buff == "search")
			print_it(users);
		else if (buff == "EXIT" || buff == "exit")
			break ;
	}
	return (0);
}
