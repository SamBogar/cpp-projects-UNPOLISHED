#ifndef TEST_HPP
#define TEST_HPP

#include <stack>
#include <iostream>

template < typename T >
class my_stack: public std::stack< T >
{
	public:
		using std::stack< T >::c;
};

#endif
