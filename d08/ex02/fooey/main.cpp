#include "test.hpp"

int	main( void )
{
	my_stack< int > foo;
	foo.push(42);
	foo.push(21);
	std::cout << foo.c[ 1 ] << std::endl;
	std::cout << foo.c[ 0 ] << std::endl;
}
