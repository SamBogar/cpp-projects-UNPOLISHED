/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iterator.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbogar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/14 21:39:22 by sbogar            #+#    #+#             */
/*   Updated: 2017/07/14 22:52:32 by sbogar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITERATOR_HPP
#define ITERATOR_HPP

#include "mutantstack.hpp"

template < typename T >
MutantStack< T >::iterator::iterator( void ): parent(0)
{
	pos = 0;
}

template < typename T >
MutantStack< T >::iterator::iterator( MutantStack< T > *src, int _pos): parent(src)
{
	pos = _pos;
}

template < typename T >
MutantStack< T >::iterator::iterator( MutantStack< T >::iterator const & src )
{
	parent = src.parent;
	pos = src.getPos();
}

template < typename T >
MutantStack< T >::iterator::~iterator( void )
{

}

template < typename T >
T	&		MutantStack< T >::iterator::operator*(void) const
{
	return (this->parent->c[this->pos]);
}

template < typename T >
typename MutantStack< T >::iterator & 	MutantStack< T >::iterator::operator=(MutantStack< T >::iterator const & src)
{
	this->pos = src.getPos();
	this->parent = src.parent;

	return (*this);
}

template < typename T >
typename MutantStack< T >::iterator &	MutantStack< T >::iterator::operator--()
{
	--this->pos;
	return ( *this );
}

template < typename T >
int		MutantStack< T >::iterator::getPos( void ) const
{
	return (this->pos);
}

template < typename T >
typename MutantStack< T >::iterator 	MutantStack< T >::iterator::operator--(int)
{
	MutantStack::iterator	temp(*this);

	--this->pos;
	return (temp);
}

template < typename T >
typename MutantStack< T >::iterator &	MutantStack< T >::iterator::operator++()
{
	++this->pos;
	return ( *this );
}

template < typename T >
typename MutantStack< T >::iterator 	MutantStack< T >::iterator::operator++(int)
{
	MutantStack::iterator	temp(*this);

	++this->pos;
	return (temp);
}

template < typename T >
bool 			MutantStack< T >::iterator::operator>=( MutantStack< T >::iterator const & src)
{
	return (this->pos >= src.getPos());
}

template < typename T >
bool 			MutantStack< T >::iterator::operator<=( MutantStack< T >::iterator const & src)
{
	return (this->pos <= src.getPos());
}

template < typename T >
bool 			MutantStack< T >::iterator::operator!=( MutantStack< T >::iterator const & src)
{
	return (this->pos != src.getPos());
}

template < typename T >
bool 			MutantStack< T >::iterator::operator==( MutantStack< T >::iterator const & src)
{
	return (this->pos == src.getPos());
}

template < typename T >
bool 			MutantStack< T >::iterator::operator>( MutantStack< T >::iterator const & src)
{
	return (this->pos > src.getPos());
}

template < typename T >
bool 			MutantStack< T >::iterator::operator<( MutantStack< T >::iterator const & src)
{
	return (this->pos < src.getPos());
}


#endif
