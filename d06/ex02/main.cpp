/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbogar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/12 19:26:41 by sbogar            #+#    #+#             */
/*   Updated: 2017/07/12 20:39:11 by sbogar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bases.hpp"

Base::~Base( void )
{

}

Base	*generate( void )
{
	int	r;

	r = rand() % 3;
	if (r == 0)
		return (new (A));
	else if (r == 1)
		return (new (B));
	else
		return (new (C));
}

void	identify_from_pointer( Base * p )
{
	A	*a;
	B	*b;
	C	*c;

	a = dynamic_cast<A*>(p);
	if (a)
		std::cout << "A" << std::endl;
	b = dynamic_cast<B*>(p);
	if (b)
		std::cout << "B" << std::endl;
	c = dynamic_cast<C*>(p);
	if (c)
		std::cout << "C" << std::endl;
	if (!a && !b && !c)
		std::cout << "That pointer didn't even make sense, yo" << std::endl;
}

void	identify_from_reference( Base & p)
{
  Base	tmp;
  A		*a;
  B		*b;
  C		*c;

 	tmp = p; 
	a = dynamic_cast<A*>(&p);
	if ( a )
		std::cout << "A" << std::endl;
	b = dynamic_cast<B*>(&p);
	if ( b )
		std::cout << "B" << std::endl;
	c = dynamic_cast<C*>(&p);
	if ( c )
		std::cout << "C" << std::endl;
	
   

	
}

int		main( void )
{
	srand(time(0));
	Base	*ptr = generate();
	Base	&ref = *ptr;

	identify_from_pointer( ptr );
	identify_from_reference( ref );

	return (0);
}
