/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrapConstructors.cpp                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbogar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/06 23:51:56 by sbogar            #+#    #+#             */
/*   Updated: 2017/07/07 21:10:56 by sbogar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap( void )
{
	Name = "404 no name found";
	HitPoints = 100;
	MaxHitPoints = 100;
	EnergyPoints = 100;
	MaxEnergy = 100;
	Level = 1;
	MeleeAtkDmg = 30;
	RangedAtkDmg = 20;
	ArmorDmgRed = 5;
	std::cout << "default FragTrap constructor called" << std::endl;
}

FragTrap::FragTrap( std::string n_name)
{
	Name = n_name;
	HitPoints = 100;
	MaxHitPoints = 100;
	EnergyPoints = 100;
	MaxEnergy = 100;
	Level = 1;
	MeleeAtkDmg = 30;
	RangedAtkDmg = 20;
	ArmorDmgRed = 5;
	std::cout << "Named FragTrap constructor called" << std::endl;
}

FragTrap::FragTrap( FragTrap &src ){
	std::cout << "copy FragTrap constructor called" << std::endl;
	this->HitPoints		=	src.HitPoints;          
	this->MaxHitPoints	=	src.MaxHitPoints;       
	this->EnergyPoints	=	src.EnergyPoints;
	this->MaxEnergy		=	src.MaxEnergy;
	this->Level			=	src.Level;
	this->MeleeAtkDmg	=	src.MeleeAtkDmg	;
	this->RangedAtkDmg	=	src.RangedAtkDmg;
	this->ArmorDmgRed	=	src.ArmorDmgRed;
}

FragTrap &		FragTrap::operator=( FragTrap const & src)
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

FragTrap::~FragTrap( void ){
	std::cout << "default FragTrap destructor called" << std::endl;
}
