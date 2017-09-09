/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbogar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/12 21:08:14 by sbogar            #+#    #+#             */
/*   Updated: 2017/09/05 21:43:33 by sbogar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template < typename T >
void	swap(T &one, T &two)
{
	T	tmp = one;
	
	one = two;
	two = tmp;
}

template < typename T >
T		&min(T &one, T &two)
{
	return (two <= one ? two : one);
}

template < typename T >
T		&max(T &one, T &two)
{
	return (two >= one ? two : one);
}
class Awesome {

public:

Awesome( int n ) : _n( n ) {}

bool operator==( Awesome const & rhs ) { return (this->_n == rhs._n); }
bool operator!=( Awesome const & rhs ) { return (this->_n != rhs._n); }
bool operator>( Awesome const & rhs ) { return (this->_n > rhs._n); }
bool operator<( Awesome const & rhs ) { return (this->_n < rhs._n); }
bool operator>=( Awesome const & rhs ) { return (this->_n >= rhs._n); }
bool operator<=( Awesome const & rhs ) { return (this->_n <= rhs._n); }

int _n;
private:

};

int		main ( void )
{
	Awesome *foo = new Awesome(42);
	Awesome *bar = new Awesome(69);

	std::cout << (max<Awesome*>(foo, bar))->_n << std::endl;
	std::cout << (min<Awesome*>(foo, bar))->_n << std::endl;

	std::cout << foo->_n << std::endl;
	std::cout << bar->_n << std::endl;
	swap<Awesome*>(foo, bar);
	std::cout << foo->_n << std::endl;
	std::cout << bar->_n << std::endl;
return (0 );
}

/*
int main( void ) {
int a = 2;
int b = 3;
::swap( a, b );
std::cout << "a = " << a << ", b = " << b << std::endl;
std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
std::string c = "chaine1";
std::string d = "chaine2";
::swap(c, d);
std::cout << "c = " << c << ", d = " << d << std::endl;
std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
return 0;
}*/
/*	int	a;
	int	b;
   
	a = 99;
	b = 0;
	std::cout << "a: " << a << std::endl
		<< "b: " << b << std::endl;
	swap<int>(&a, &b);
	std::cout << "a: " << a << std::endl
		<< "b: " << b << std::endl;
	std::cout << "min: " << min<int>(a, b) << std::endl;
	std::cout << "max: " << max<int>(a, b) << std::endl;
}*/
