/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbogar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/13 19:44:59 by sbogar            #+#    #+#             */
/*   Updated: 2017/07/14 22:57:43 by sbogar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <limits.h>
#include <iostream>
#include <algorithm>
#include <vector>

class	Span{
	public:

	Span( void );
	Span( unsigned int n );
	Span( Span const &src );
	~Span( void );

	int		shortestSpan() throw(std::exception);
	int		longestSpan() throw(std::exception);
	void	addNumber(int n) throw(std::exception);
	void	addNumbers( int n_n ) throw (std::exception);

	std::vector<int>	vec;
	private:
		int	max_entries;
};

#endif
