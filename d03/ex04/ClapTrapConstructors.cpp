/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrapConstructors.cpp                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbogar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/06 23:51:56 by sbogar            #+#    #+#             */
/*   Updated: 2017/07/07 21:00:54 by sbogar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap( void )
{
	srand((unsigned)time(0));
	Name = "404 no name found";
	std::cout << "default ClapTrap constructor called" << std::endl;
}

ClapTrap::ClapTrap( std::string n_name): Name(n_name)	
{
	srand((unsigned)time(0));
	std::cout << "Named ClapTrap constructor called" << std::endl;
}

ClapTrap::ClapTrap( ClapTrap &src ){
	srand((unsigned)time(0));
	std::cout << "copy ClapTrap constructor called" << std::endl;
	this->HitPoints		=	src.HitPoints;          
	this->MaxHitPoints	=	src.MaxHitPoints;       
	this->EnergyPoints	=	src.EnergyPoints;
	this->MaxEnergy		=	src.MaxEnergy;
	this->Level			=	src.Level;
	this->MeleeAtkDmg	=	src.MeleeAtkDmg	;
	this->RangedAtkDmg	=	src.RangedAtkDmg;
	this->ArmorDmgRed	=	src.ArmorDmgRed;
}

ClapTrap &		ClapTrap::operator=( ClapTrap const & src)
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

ClapTrap::~ClapTrap( void ){
	std::cout << "default ClapTrap destructor called" << std::endl;
}
