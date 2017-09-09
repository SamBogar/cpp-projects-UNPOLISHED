/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbogar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/06 23:51:56 by sbogar            #+#    #+#             */
/*   Updated: 2017/07/07 18:40:53 by sbogar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

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
