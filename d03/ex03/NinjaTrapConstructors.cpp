/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrapConstructors.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbogar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/06 23:51:56 by sbogar            #+#    #+#             */
/*   Updated: 2017/07/07 21:12:13 by sbogar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap( void )
{
	Name = "404 no name found";
	HitPoints = 60;
	MaxHitPoints = 60;
	EnergyPoints = 120;
	MaxEnergy = 120;
	Level = 1;
	MeleeAtkDmg = 60;
	RangedAtkDmg = 5;
	ArmorDmgRed = 0;
	std::cout << "default NinjaTrap constructor called" << std::endl;
}

NinjaTrap::NinjaTrap( std::string n_name)
{
	Name = n_name;
	HitPoints = 60;
	MaxHitPoints = 60;
	EnergyPoints = 120;
	MaxEnergy = 120;
	Level = 1;
	MeleeAtkDmg = 60;
	RangedAtkDmg = 5;
	ArmorDmgRed = 0;
	std::cout << "Named NinjaTrap constructor called" << std::endl;
}

NinjaTrap::NinjaTrap( NinjaTrap &src ){
	std::cout << "copy NinjaTrap constructor called" << std::endl;
	this->HitPoints		=	src.HitPoints;          
	this->MaxHitPoints	=	src.MaxHitPoints;       
	this->EnergyPoints	=	src.EnergyPoints;
	this->MaxEnergy		=	src.MaxEnergy;
	this->Level			=	src.Level;
	this->MeleeAtkDmg	=	src.MeleeAtkDmg	;
	this->RangedAtkDmg	=	src.RangedAtkDmg;
	this->ArmorDmgRed	=	src.ArmorDmgRed;
}

NinjaTrap &		NinjaTrap::operator=( NinjaTrap const & src)
{
	this->HitPoints		=	src.HitPoints;          
	this->MaxHitPoints	=	src.MaxHitPoints;       
	this->EnergyPoints	=	src.EnergyPoints;
	this->MaxEnergy		=	src.MaxEnergy;
	this->Level			=	src.Level;
	this->MeleeAtkDmg	=	src.MeleeAtkDmg	;
	this->RangedAtkDmg	=	src.RangedAtkDmg;
	this->ArmorDmgRed	=	src.ArmorDmgRed;
	return ( *this );
}

NinjaTrap::~NinjaTrap( void ){
	std::cout << "default NinjaTrap destructor called" << std::endl;
}
