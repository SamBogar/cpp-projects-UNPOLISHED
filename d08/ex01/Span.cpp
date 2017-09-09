/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbogar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/13 19:44:48 by sbogar            #+#    #+#             */
/*   Updated: 2017/07/14 23:04:21 by sbogar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span( void )
{
}

Span::Span( unsigned int n )
{
	vec = std::vector<int>(n, 0);
	max_entries = n;
}

Span::Span( Span const &src )
{
}

Span::~Span( void )
{
}

int		Span::shortestSpan( void ) throw(std::exception)
{
	std::vector<int>::const_iterator	it;	
	std::vector<int>::const_iterator	iter;	
	unsigned int	min;

	min = UINT_MAX;
	if (this->vec.size() == 0 || this->vec.size() == 1)
		throw (std::exception());
	for (it = this->vec.begin(); it != this->vec.end(); it++)
		for (iter = it + 1; iter != this->vec.end(); iter++)
			if (abs(*it - *iter) < min)
				min = abs(*it - *iter);

	return (min);
}

int		Span::longestSpan( void ) throw(std::exception)
{
	std::vector<int>::const_iterator	itb = this->vec.begin();	
	std::vector<int>::const_iterator	ite = this->vec.end();	

	if (this->vec.size() == 0 || this->vec.size() == 1)
		throw (std::exception());
	return (*std::max_element(itb, ite) - *std::min_element(itb, ite));
}

void	Span::addNumber( int n ) throw(std::exception)
{
	static	int 	i = 0;

	if (i >= max_entries)
		throw( std::exception());
	this->vec[i++] = n;
}

void	Span::addNumbers( int n_n ) throw( std::exception )
{
	try
	{
		for (int i = 0; i < n_n; i++)
			this->addNumber(rand());
	}
	catch( std::exception &e )
	{
		throw (std::exception());
	}
}
