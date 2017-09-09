/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lists.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbogar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/07 16:37:35 by sbogar            #+#    #+#             */
/*   Updated: 2017/07/07 17:15:53 by sbogar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

void get_attacks ( std::string attacks[5] )
{
	attacks[0] = "a long distance shot from a laser shotgun";
	attacks[1] = "a spiked baseball bat";
	attacks[2] = "a plasma assault rifle";
	attacks[3] = "a rocket launcher with, like, a bunch of guns attached or something";
	attacks[4] = "ebola";
}

void	get_challenges( std::string chlgs[5] )
{
	chlgs[0] = "Hey! License and identification, bub";
	chlgs[1] = "If it were up to me, you'd be dead already. But it's not, so here we are";
	chlgs[2] = "When's the last time you had a shower? Oh my god, I can smell you from here, and I don't even have a nose!";
	chlgs[3] = "To enter this lair you have to answer my riddles. I'm still writing them, so please be patient";
	chlgs[4] = "Abandon hope, all ye who enter here";
}
