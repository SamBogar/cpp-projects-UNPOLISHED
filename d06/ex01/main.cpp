/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbogar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/12 15:55:47 by sbogar            #+#    #+#             */
/*   Updated: 2017/07/12 20:47:45 by sbogar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdlib.h>
#include <time.h>


struct Data
{
	std::string s1;
	int			n;
	std::string	s2;
};

void			*serialize( void )
{
	Data				*serial = new Data();
	int					i;

	i = -1;
	while (++i < 8)
		serial->s1 += (rand() % (126 - 33) + 33);
	serial->n = rand();
	i = -1;
	while (++i < 8)
		serial->s2 += (rand() % (126 - 33) + 33);
	std::cout << "serialized s1: " << serial->s1 << std::endl
		<< "serialized n: " << serial->n << std::endl
		<< "serialized s2: " << serial->s2 << std::endl;
	return (static_cast<void *>(serial));
}

Data				*deserialize( void * raw )
{
	return (static_cast<Data *>(raw));
}


int		main(void)
{
	srand(time(0));
	Data	*tmp;
	tmp = deserialize(serialize());

	std::cout << "s1: " << tmp->s1 << std::endl
		<< "n: " << tmp->n << std::endl
		<< "s2: " << tmp->s2 << std::endl;
	return (0);
}
