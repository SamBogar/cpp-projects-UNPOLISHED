/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Traps.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbogar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/06 23:51:56 by sbogar            #+#    #+#             */
/*   Updated: 2017/07/07 20:47:55 by sbogar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "SuperTrap.hpp"

int		ScavTrap::rangedAttack(std::string const & target){
	std::cout << "Scavtrap "
		<< this->Name << " attacks " << target
		<< " at range, causing " << this->RangedAtkDmg
		<< " points of damage !" << std::endl;
	return ( this->MeleeAtkDmg );
}

int		ScavTrap::meleeAttack(std::string const & target){
	std::cout << "ScavTrap "
		<< this->Name << " does a melee attack " << target
		<< " causing " << this->MeleeAtkDmg
		<< " points of damage !" << std::endl;
	return ( this->MeleeAtkDmg );
}

int		NinjaTrap::rangedAttack(std::string const & target){
	std::cout << "NinjaTrap "
		<< this->Name << " attacks " << target
		<< " at range, causing " << this->RangedAtkDmg
		<< " points of damage !" << std::endl;
	return ( this->MeleeAtkDmg );
}

int		NinjaTrap::meleeAttack(std::string const & target){
	std::cout << "NinjaTrap "
		<< this->Name << " does a melee attack " << target
		<< " causing " << this->MeleeAtkDmg
		<< " points of damage !" << std::endl;
	return ( this->MeleeAtkDmg );
}

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

int		SuperTrap::rangedAttack(std::string const & target){
	return ( FragTrap::rangedAttack(target) );
}

int		SuperTrap::meleeAttack(std::string const & target){
	return ( NinjaTrap::meleeAttack(target) );
}

void				ScavTrap::challengeNewcomer( std::string const & target ){
	std::string		foo = target;
	std::string		challenges[5];
	unsigned int	rando;

	rando = rand() % 5;

	get_challenges(challenges);
	std::cout << "A newcomer approaches!" << std::endl;
	std::cout << "^^" << challenges[rando] << std::endl;
}

int	FragTrap::vaulthunter_dot_exe( std::string const & target ){
	std::string		foo = target;
	std::string		attacks[5];
	unsigned int	rando;

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

int			NinjaTrap::ninjaShoebox(FragTrap & victim)
{
	std::cout << "~~ooh, I see a FragTrap. Man I hate those guys" << std::endl;	
	victim.takeDamage(this->MeleeAtkDmg);
	return (0);
}

int			NinjaTrap::ninjaShoebox(ScavTrap & victim)
{
	std::cout << "~~ooh, I see a ScavTrap. Man I hate those guys" << std::endl;	
	victim.takeDamage(this->MeleeAtkDmg);
	return (0);
}

int			NinjaTrap::ninjaShoebox(NinjaTrap & victim)
{
	std::cout << "~~ooh, I see a NinjaTrap. Man I hate those guys" << std::endl;	
	victim.takeDamage(this->MeleeAtkDmg);
	return (0);
}
