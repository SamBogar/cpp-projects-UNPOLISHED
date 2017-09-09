/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbogar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/06 23:51:56 by sbogar            #+#    #+#             */
/*   Updated: 2017/07/07 20:05:14 by sbogar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int		FragTrap::rangedAttack(std::string const & target){
	std::cout << "FR4G-TP "
		<< this->Name << " attacks " << target
		<< " at range, causing " << this->RangedAtkDmg
		<< " points of damage !" << std::endl;
	return ( this->MeleeAtkDmg );
}

int		FragTrap::meleeAttack(std::string const & target){
	std::cout << "FR4G-TP "
		<< this->Name << " does a melee attack " << target
		<< " causing " << this->MeleeAtkDmg
		<< " points of damage !" << std::endl;
	return ( this->MeleeAtkDmg );
}

int	FragTrap::takeDamage( unsigned int amount){
	int		dmg;

	dmg = amount - this->ArmorDmgRed;
	if ( dmg <= 0 )
	{
		std::cout << ">>Thanks armor! No damage!" << std::endl;
		return ( 0 );
	}
	if ((int)this->HitPoints <= dmg)
	{
		std::cout << ">>Oh no! That killed me!" << std::endl;
		this->HitPoints = 0;
		return ( -1 );
	}
	else
	{
		std::cout << ">>OUCH! I just took " << dmg << " damage!" << std::endl;
		this->HitPoints -= dmg;
		return ( dmg );
	}
}

int	FragTrap::beRepaired( unsigned int amount){
	std::cout << ">>Oh you have a health pack?" << std::endl;
	if (this->HitPoints + amount > 100)
	{
		std::cout << ">>More than was needed, but much appreciated!" << std::endl;
		this->HitPoints = this->MaxHitPoints;
		return ( 100 );
	}
	else
	{
		std::cout << ">>Thanks for the heals!" << std::endl;
		this->HitPoints += amount;
		return ( amount );
	}
}


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
