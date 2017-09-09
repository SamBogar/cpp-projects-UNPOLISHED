/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbogar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/13 13:39:10 by sbogar            #+#    #+#             */
/*   Updated: 2017/07/13 17:10:14 by sbogar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdio.h>
#include <stdlib.h>

template < typename T >
void		iter(T const *arr, size_t len, void (*f)(T const &))
{
	size_t	i;

	i = -1;
	while (++i < len)
		f(arr[i]);
}

void	test_normal(char const &foo)
{
	std::cout << foo;
}

template < typename T >
void	test_template(T const &foo)
{
	std::cout << foo;
}

int		main( void )
{
	int			i;
	char		*chrs = new char[10];
	int			*ints = new int[10];

	i = 0;
	while( i < 10 )
	{
		chrs[i] = 'z';
		ints[i] = 69;
		i++;
	}
	//normal function with chars
	iter(chrs, 10, test_normal);
	std::cout << std::endl;
	//instantiated function template with chars
	iter(chrs, 10, test_template);
	std::cout << std::endl;
	//instantiated function template with ints
	iter(ints, 10, test_template);
	std::cout << std::endl;
	return (0);
}
