/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbogar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/13 15:05:29 by sbogar            #+#    #+#             */
/*   Updated: 2017/07/13 22:43:47 by sbogar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template < typename T >
class	Array{
	public:

	Array( void );
	Array( unsigned int n );
	Array( Array &src );
	~Array( void );
	Array	&operator= ( Array & src);

	T	*arr;
	T	&operator[] ( int x ) throw(std::exception);

	int	size( void ) const;
	private:
		int length;

};

template < typename T >
Array< T >::Array( void )
{
	arr = new T[1];

	length = 0;
	arr[0] = 0;
}

template < typename T >
Array< T >::Array( unsigned int n )
{
	arr = new T[n];
	length = n;

	arr[0] = n;
}

template < typename T >
Array< T >::Array( Array::Array &src )
{
	arr = new T[src.size()];
	length = src.size();
	int		i;

	i = -1;
	while ( ++i < src.size() )
		arr[i] = src[i];
}

template < typename T >
Array< T >::~Array( void )
{
	delete [] arr;
}

template < typename T >
Array< T >	&Array< T >::operator= ( Array::Array & src)
{
	delete [] arr;
	arr = new T[src.size()];
	length = src.size();
	int		i;

	i = -1;
	while ( ++i < src.size() )
		arr[i] = src[i];
}

template < typename T >
T	&Array< T >::operator[] ( int x ) throw(std::exception)
{
	if (x >= length)
		throw(std::exception());
	else
		return (arr[x]);
}

template < typename T >
int		Array< T >::size( void ) const
{
	return (length);
}
