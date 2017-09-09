/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbogar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/06 23:40:07 by sbogar            #+#    #+#             */
/*   Updated: 2017/07/07 21:26:08 by sbogar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include <iostream>
#include <unistd.h>

void get_attacks ( std::string attacks[5] );
void get_challenges ( std::string challenges[5] );

class ScavTrap{
public:
	ScavTrap( void );
	ScavTrap( ScavTrap &src );
	ScavTrap( std::string name );
	~ScavTrap( void );

	ScavTrap &		operator=( ScavTrap const & src);
	int				rangedAttack(std::string const & target);
	int				meleeAttack(std::string const & target);
	int				takeDamage( unsigned int amount);
	int				beRepaired( unsigned int amount);
	void			challengeNewcomer( std::string const & target );
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
