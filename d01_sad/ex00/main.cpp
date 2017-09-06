/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbogar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/05 16:20:43 by sbogar            #+#    #+#             */
/*   Updated: 2017/07/05 17:41:39 by sbogar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Pony.hpp"

void	stack_pony( Pony stacky )
{
	std::cout << "stack pony: " << std::endl;
	stacky.neigh();
	stacky.gallop(42);
}

void	heap_pony( Pony* heaper )
{
	std::cout << "heap pony: " << std::endl;
	std::cout << "strike a pose!:  " << std::endl;
	heaper->pose();
}

int		main(void)
{
	Pony	why_even_have_the_guy_on_me = Pony("why_even_have_the_guy_on_me", "Shetland");
	Pony*	seriously_we_would_probably_be_way_faster = new Pony("seriously_we_would_probably_be_way_faster",
																"Appaloosa");

	stack_pony(why_even_have_the_guy_on_me);
	heap_pony(seriously_we_would_probably_be_way_faster);

	delete(seriously_we_would_probably_be_way_faster);
	return (0);
}
