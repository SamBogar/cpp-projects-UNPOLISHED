/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrapConstructors.cpp                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbogar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/06 23:51:56 by sbogar            #+#    #+#             */
/*   Updated: 2017/07/07 21:26:49 by sbogar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap( void ):	HitPoints(100), \
							MaxHitPoints(100),
							EnergyPoints(100),
							MaxEnergy(100), \
							Level(1), \
    						MeleeAtkDmg(30), \
							RangedAtkDmg(20),\
							ArmorDmgRed(5)
{
	Name = "404 no name found";
	std::cout << "default ScavTrap constructor called" << std::endl;
}

ScavTrap::ScavTrap( std::string n_name):	HitPoints(100), \
											MaxHitPoints(100), \
											EnergyPoints(50), \
											MaxEnergy(50), \
											Level(1), \
											MeleeAtkDmg(20), \
										   	RangedAtkDmg(15), \
											ArmorDmgRed(3), \
											Name(n_name)
{
	std::cout << "Named ScavTrap constructor called" << std::endl;
}

ScavTrap::ScavTrap( ScavTrap &src ){
	std::cout << "copy ScavTrap constructor called" << std::endl;
	this->HitPoints		=	src.HitPoints;          
	this->MaxHitPoints	=	src.MaxHitPoints;       
	this->EnergyPoints	=	src.EnergyPoints;
	this->MaxEnergy		=	src.MaxEnergy;
	this->Level			=	src.Level;
	this->MeleeAtkDmg	=	src.MeleeAtkDmg	;
	this->RangedAtkDmg	=	src.RangedAtkDmg;
	this->ArmorDmgRed	=	src.ArmorDmgRed;
}

ScavTrap &	ScavTrap::operator=( ScavTrap const & src ){
	this->HitPoints		=	src.HitPoints;          
	this->MaxHitPoints	=	src.MaxHitPoints;       
	this->EnergyPoints	=	src.EnergyPoints;
	this->MaxEnergy		=	src.MaxEnergy;
	this->Level			=	src.Level;
	this->MeleeAtkDmg	=	src.MeleeAtkDmg	;
	this->RangedAtkDmg	=	src.RangedAtkDmg;
	this->ArmorDmgRed	=	src.ArmorDmgRed;
	return (*this);
}

ScavTrap::~ScavTrap( void ){
	std::cout << "default ScavTrap destructor called" << std::endl;
}
