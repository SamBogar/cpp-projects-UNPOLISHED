/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbogar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/06 23:39:30 by sbogar            #+#    #+#             */
/*   Updated: 2017/07/07 20:52:19 by sbogar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"
#include <iostream>

int main (void)
{
	SuperTrap	Super("Supes");
	ScavTrap	Scav("Scavver");

	std::cout << "HitPoints are:" << Super.HitPoints << std::endl;
	std::cout << "MaxHitPoints are: " << Super.MaxHitPoints << std::endl;
	std::cout << "EnergyPoints are: " << Super.EnergyPoints << std::endl;
	std::cout << "MaxEnergy is : " << Super.MaxEnergy << std::endl;
	std::cout << "Level is: " << Super.Level << std::endl;
	std::cout << "MeleeAtkDmg is: " << Super.MeleeAtkDmg << std::endl;
	std::cout << "RangedAtkDmg is: " << Super.RangedAtkDmg << std::endl;
	std::cout << "ArmorDmgRed is: " << Super.ArmorDmgRed << std::endl;
	
	Super.ninjaShoebox(Scav);
	Super.takeDamage(Super.vaulthunter_dot_exe( "vault hunter"));
	Super.rangedAttack("vault hunter");
	Super.meleeAttack("vault hunter");

	return (0);
}
