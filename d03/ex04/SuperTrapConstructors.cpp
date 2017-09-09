/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrapConstructors.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbogar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/06 23:51:56 by sbogar            #+#    #+#             */
/*   Updated: 2017/07/07 21:07:08 by sbogar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

SuperTrap::SuperTrap( void )
{

	Name = "404 no name found";
	HitPoints = 100;
	MaxHitPoints = 100;
	EnergyPoints = 120;
	MaxEnergy = 120;
	Level = 1;
	MeleeAtkDmg = 60;
	RangedAtkDmg = 20;
	ArmorDmgRed = 5;
	std::cout << "default SuperTrap constructor called" << std::endl;
}

SuperTrap::SuperTrap( std::string n_name)
{
	Name = n_name;
	HitPoints = 100;
	MaxHitPoints = 100;
	EnergyPoints = 120;
	MaxEnergy = 120;
	Level = 1;
	MeleeAtkDmg = 60;
	RangedAtkDmg = 20;
	std::cout << "Named SuperTrap constructor called" << std::endl;
}

SuperTrap::SuperTrap( SuperTrap &src ){
	std::cout << "copy SuperTrap constructor called" << std::endl;
	this->HitPoints		=	src.HitPoints;          
	this->MaxHitPoints	=	src.MaxHitPoints;       
	this->EnergyPoints	=	src.EnergyPoints;
	this->MaxEnergy		=	src.MaxEnergy;
	this->Level			=	src.Level;
	this->MeleeAtkDmg	=	src.MeleeAtkDmg	;
	this->RangedAtkDmg	=	src.RangedAtkDmg;
	this->ArmorDmgRed	=	src.ArmorDmgRed;
}

SuperTrap &		SuperTrap::operator=( SuperTrap const & src ){
	this->HitPoints		=	src.HitPoints;          
	this->MaxHitPoints	=	src.MaxHitPoints;       
	this->EnergyPoints	=	src.EnergyPoints;
	this->MaxEnergy		=	src.MaxEnergy;
	this->Level			=	src.Level;
	this->MeleeAtkDmg	=	src.MeleeAtkDmg	;
	this->RangedAtkDmg	=	src.RangedAtkDmg;
	this->ArmorDmgRed	=	src.ArmorDmgRed;
	
	return ( *this);
}

SuperTrap::~SuperTrap( void ){
	std::cout << "default SuperTrap destructor called" << std::endl;
}
