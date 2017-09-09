/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbogar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/13 14:49:38 by sbogar            #+#    #+#             */
/*   Updated: 2017/07/13 15:35:37 by sbogar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

template < typename T >
class	Array{
	public:

	Array( void );
	Array( unsigned int n );
	Array( Array &src );
	~Array( void );
	Array	&operator= ( Array & src);

	T	*arr;
	T	&operator[] ( int x );

	private:
		int	size( void );


};

#endif
