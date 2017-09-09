/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbogar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/13 15:35:47 by sbogar            #+#    #+#             */
/*   Updated: 2017/07/13 23:26:10 by sbogar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.tpp"

int main ( void )
{
	Array<int> foo( 8 );

	foo[0] = 1;
	foo[1] = 2;
	foo[2] = 3;
	Array<int> bar = foo;
	std::cout << foo[0] << std::endl;
	std::cout << bar[0] << std::endl;
	foo[0] = 42;
	std::cout << foo[0] << std::endl;
	std::cout << bar[0] << std::endl;
	/*
	//showing that new and my constructors initialize array values the same way
			//also shows that the [] overload works
	int * a = new int(4);
	Array<int> b(4);
	std::cout << "new() : " << a[0] << std::endl;
	std::cout << "mine : " << b[0]  << std::endl;

	//here I'm showing the copy constructor works as intended
	Array<int> bar( foo );
	std::cout << "foo[1]: " << foo[1] << std::endl;
	std::cout << "bar[1]: " << bar[1] << std::endl;

	//showing the functionality of size()
	std::cout << "foo.size(): " << foo.size() << std::endl;

	//aaand showing that I'm throwing an exception for out of bounds
	try
	{
		foo[99] = 42;
	}
	catch (std::exception &e)
	{
		std::cout << "caught the exception" << std::endl;
	}*/
	return ( 0 );
}
