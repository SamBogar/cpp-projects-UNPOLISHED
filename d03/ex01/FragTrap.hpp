/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbogar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/06 23:40:07 by sbogar            #+#    #+#             */
/*   Updated: 2017/07/07 21:24:36 by sbogar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include <iostream>
#include <unistd.h>

void get_attacks ( std::string attacks[5] );

class FragTrap{
public:
	FragTrap( void );
	FragTrap( FragTrap &src );
	FragTrap( std::string name );
	~FragTrap( void );

	FragTrap &		operator=( FragTrap const & src);
	int				rangedAttack(std::string const & target);
	int				meleeAttack(std::string const & target);
	int				takeDamage( unsigned int amount);
	int				beRepaired( unsigned int amount);
	int				vaulthunter_dot_exe( std::string const & target );
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
