/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbogar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/06 23:51:56 by sbogar            #+#    #+#             */
/*   Updated: 2017/07/07 17:33:33 by sbogar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int		ClapTrap::rangedAttack(std::string const & target){
	std::cout << "FR4G-TP "
		<< this->Name << " attacks " << target
		<< " at range, causing " << this->RangedAtkDmg
		<< " points of damage !" << std::endl;
	return ( this->MeleeAtkDmg );
}

int		ClapTrap::meleeAttack(std::string const & target){
	std::cout << "FR4G-TP "
		<< this->Name << " does a melee attack " << target
		<< " causing " << this->MeleeAtkDmg
		<< " points of damage !" << std::endl;
	return ( this->MeleeAtkDmg );
}

int	ClapTrap::takeDamage( unsigned int amount){
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

int	ClapTrap::beRepaired( unsigned int amount){
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
