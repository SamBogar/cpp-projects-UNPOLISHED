/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbogar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/06 23:51:56 by sbogar            #+#    #+#             */
/*   Updated: 2017/07/07 20:04:17 by sbogar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int	FragTrap::vaulthunter_dot_exe( std::string const & target ){
	std::string		foo = target;
	std::string		attacks[5];
	unsigned int	rando;

	srand((unsigned)time(0));
	usleep ( 0.7 * (1000000) );
	rando = rand() % 5;

	get_attacks(attacks);
	if (this->EnergyPoints < 25)
	{
		std::cout << "Not enough energy!" << std::endl;
		return ( -1 );
	}
	std::cout << "A vault hunter attacks "
		<< this->Name << " with " << attacks[rando] << std::endl;
	this->EnergyPoints -= 25;
	return ( (rando + 1) * 10);

}
