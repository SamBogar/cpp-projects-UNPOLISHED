/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbogar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/06 23:39:30 by sbogar            #+#    #+#             */
/*   Updated: 2017/07/07 17:24:27 by sbogar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>

int main (void)
{
	FragTrap test;
	FragTrap test1("Badass Mcgee");
	ScavTrap test1a("Door Guard" );
	FragTrap test2(test1);

	test1.takeDamage(test1.vaulthunter_dot_exe( test1.getName() ));
	test1.meleeAttack("vault hunter");
	test1.rangedAttack("vault hunter");
	test1.beRepaired(20);
	while (test1.HitPoints > 0)
		test1.takeDamage(test1.vaulthunter_dot_exe(test1.getName() ));
	std::cout << "****The first claptrap dead, the vault hunter approaches the doors of my lair****" << std::endl;
	test1a.challengeNewcomer("vault hunter");
	return (0);
}
