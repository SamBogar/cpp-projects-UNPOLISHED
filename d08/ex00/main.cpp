/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbogar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/13 18:43:02 by sbogar            #+#    #+#             */
/*   Updated: 2017/07/14 20:05:12 by sbogar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int		main( void )
{
	std::vector<int>					foo(10, 42);
	std::list<int>						bar(10, 42);
	std::list<int>::const_iterator		whatever;
	std::vector<int>::const_iterator	idc;
	
	foo[4] = 69;
	bar.push_back(10);
	try
	{
		whatever = easyfind(bar, 42);
		std::cout << *whatever << std::endl;
		idc = easyfind(foo, 69);
		std::cout << *idc << std::endl;
		easyfind(foo, 10);
	}
	catch (std::exception &e)
	{
		std::cout << "value not found" << std::endl;
	}
}
