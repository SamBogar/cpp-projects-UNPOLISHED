/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbogar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/03 14:20:03 by sbogar            #+#    #+#             */
/*   Updated: 2017/07/03 14:43:08 by sbogar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Sample {

public:
	Sample( void );
	~Sample( void );

	void	foo( int ac, char **av );

};

Sample::Sample( void ) {
	return;
}

Sample::~Sample( void ) {
	return ;
}

void	Sample::foo( int ac, char **av ){

	int i = 1;
	int	j;

	if (ac > 1)
		while (i < ac)
		{
			j = -1;
			while (av[i][++j])
				std::cout << (char)toupper(av[i][j]);
			i++;
		}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	std::cout << std::endl;
	return ;
}

int main(int ac, char **av)
{
	Sample	testing;

	testing.foo(ac, av);
	return (0);
}
