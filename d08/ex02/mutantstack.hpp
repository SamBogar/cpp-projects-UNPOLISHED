/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbogar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/13 23:47:04 by sbogar            #+#    #+#             */
/*   Updated: 2017/07/14 22:51:49 by sbogar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>

template < typename T >
class	MutantStack : public std::stack< T >
{
	public:
		using std::stack< T >::c;

	MutantStack< T >( void );
	MutantStack< T >( MutantStack &src );
	~MutantStack< T >( void );

	class	iterator
	{
		public:
		iterator( void );
		iterator( iterator const &src );
		iterator( MutantStack* src, int _pos);
		~iterator ( void );
		iterator & operator=(iterator const & src);	

		bool 			operator>=( iterator const & src);
		bool 			operator<=( iterator const & src);
		bool 			operator!=( iterator const & src);
		bool 			operator==( iterator const & src);
		bool 			operator<( iterator const & src);
		bool 			operator>( iterator const & src);
		
		T 		 &	operator*(void) const;
		iterator &	operator--();
		iterator 	operator--(int);
		iterator &	operator++();
		iterator 	operator++(int);

		int		getPos( void ) const;
		MutantStack*	parent;
		private:
			int				pos;
	};
	
	iterator 	begin( void );
	iterator 	end( void );
	private:
};

template < typename T >
MutantStack< T >::MutantStack( void )
{
}

template < typename T >
MutantStack< T >::MutantStack( MutantStack &src )
{

}

template < typename T >
typename MutantStack< T >::iterator	MutantStack< T >::begin( void )
{
	MutantStack< T >::iterator it(this, 0);

	return (it);
}

template < typename T >
typename MutantStack< T >::iterator	MutantStack< T >::end( void )
{
	MutantStack< T >::iterator it(this, this->size() - 1);

	return (it);
}

template < typename T >
MutantStack< T >::~MutantStack( void )
{

}

#endif
