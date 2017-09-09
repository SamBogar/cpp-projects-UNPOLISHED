/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbogar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/06 23:51:56 by sbogar            #+#    #+#             */
/*   Updated: 2017/07/07 17:47:50 by sbogar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

void				ScavTrap::challengeNewcomer( std::string const & target ){
	std::string		foo = target;
	std::string		challenges[5];
	unsigned int	rando;

	srand((unsigned)time(0));
	usleep ( 0.7 * (1000000) );
	rando = rand() % 5;

	get_challenges(challenges);
	std::cout << "A newcomer approaches!" << std::endl;
	std::cout << "^^" << challenges[rando] << std::endl;
}
