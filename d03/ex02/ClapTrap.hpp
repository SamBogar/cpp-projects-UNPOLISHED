/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbogar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/06 23:40:07 by sbogar            #+#    #+#             */
/*   Updated: 2017/07/07 21:17:36 by sbogar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>
#include <unistd.h>

void get_challenges ( std::string challenges[5] );
void get_attacks ( std::string attacks[5] );

class ClapTrap{
public:
	ClapTrap( void );
	ClapTrap( ClapTrap &src );
	ClapTrap( std::string name );
	~ClapTrap( void );

	ClapTrap &		operator=( ClapTrap const & src);
	int				rangedAttack(std::string const & target);
	int				meleeAttack(std::string const & target);
	int				takeDamage( unsigned int amount);
	int				beRepaired( unsigned int amount);
	std::string 	getName( void );

	unsigned int 	HitPoints;
	unsigned int	MaxHitPoints;
	unsigned int	EnergyPoints;
	unsigned int	MaxEnergy;
	unsigned int	Level;
	unsigned int	MeleeAtkDmg;
	unsigned int	RangedAtkDmg;
	unsigned int	ArmorDmgRed;
protected:
	std::string	Name;

private:
};

#endif
