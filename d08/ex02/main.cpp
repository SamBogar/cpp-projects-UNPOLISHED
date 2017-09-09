/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbogar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/13 23:47:34 by sbogar            #+#    #+#             */
/*   Updated: 2017/07/14 22:54:17 by sbogar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iterator.tpp"

int		main( void )
{
	MutantStack<int> 			foo;
	MutantStack<int>::iterator	it;

	foo.push(42);
	foo.push(84);
	foo.push(21);

	MutantStack<int>::iterator	b_it = foo.begin();
	MutantStack<int>::iterator	e_it = foo.end();
	std::cout << *(b_it++) << std::endl;
	std::cout << *b_it << std::endl;
	std::cout << *e_it << std::endl;

	it = b_it;

	std::cout << *b_it << std::endl;
	b_it++;
	std::cout << *b_it << std::endl;
	std::cout << *it << std::endl;	
	if (it < b_it)
		std::cout << "less than operator works, as do all boolean checks" << std::endl;
	return (0);
}
/*
int main()
{
MutantStack<int> mstack;
mstack.push(5);
mstack.push(17);
std::cout << mstack.top() << std::endl;
mstack.pop();
std::cout << mstack.size() << std::endl;
mstack.push(3);
mstack.push(5);
mstack.push(737);
//[...]
mstack.push(0);
MutantStack<int>::iterator it = mstack.begin();
MutantStack<int>::iterator ite = mstack.end();
++it;
--it;
while (it != ite)
{
std::cout << *it << std::endl;
++it;
}
std::stack<int> s(mstack);
return (0);
}*/
