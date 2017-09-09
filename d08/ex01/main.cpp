
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbogar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/13 19:45:16 by sbogar            #+#    #+#             */
/*   Updated: 2017/07/13 23:44:15 by sbogar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <time.h>

int		main(void)
{
	Span	foo(1);
	Span	bar( 10000 );

	srand(time(0));
	bar.addNumber(rand());
	bar.addNumbers( 9999 );
	try
	{
		std::cout << bar.shortestSpan() << std::endl;
		std::cout << bar.longestSpan() << std::endl;
		//will now try to check the span of a Span of lenth 1
		std::cout << foo.longestSpan() << std::endl;
	}
	catch (std::exception &e)
	{
		//if things work as intended, this should print
		std::cout << "Span() error caught" << std::endl;
	}
	try
	{
		//adding a number past the end of the Span
		bar.addNumber(rand());
	}
	catch (std::exception &e)
	{
		//this should print
		std::cout << "addNumber exception caught" << std::endl;
	}
	return (0);
}
