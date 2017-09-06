/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbogar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/05 16:20:43 by sbogar            #+#    #+#             */
/*   Updated: 2017/07/05 17:39:34 by sbogar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Pony.hpp"

void		Pony::neigh ( void )
{
	std::cout << "Neigh!" << std::endl;
}

void		Pony::gallop( int mph )
{
	std::cout << "whoah there! You're going" << mph << " miles per hour!" << std::endl;
}

void		Pony::pose( void )
{
std::cout <<"  ,  ,.~\"\"\"\"\"~~..                                           ___" << std::endl;	
std::cout <<"  )\\,)\\`-,       `~._                                     .'   ``._		" << std::endl;
std::cout <<"  \\  \\ | )           `~._                   .-\"\"\"\"\"-._   /         \\ " << std::endl;
std::cout <<" _/ ('  ( _(\\            `~~,__________..-\"'          `-<           " << std::endl;
std::cout <<" )   )   `   )/)   )        \\                            \\           |" << std::endl;
std::cout <<"') /)`      \\` \\,-')/\\      (                             \\          |" << std::endl;
std::cout <<"(_(\\ /7      |.   /'  )'  _(`                              |         |" << std::endl;
std::cout <<"    \\      (  `.     ')_/`                                |         /" << std::endl;
std::cout <<"     \\       \\   \\                                         |        (" << std::endl;
std::cout <<"      \\ )  /\\/   /                                         |         `~._" << std::endl;
std::cout <<"       `-._)     |                                        /.            `~," << std::endl;
std::cout <<"                 |                          |           .'  `~.          (`" << std::endl;
std::cout <<"                  \\                       _,\\          /       \\        (``" << std::endl;
std::cout <<"                   `/      /       __..-i\"   \\         |        \\      (``" << std::endl;
std::cout <<"                  .'     _/`-..--\"\"      `.   `.        \\        ) _.~<``" << std::endl;
std::cout <<"                .'    _.j     /            `-.  `.       \\      '=< `" << std::endl;
std::cout <<"              .'   _.'   \\    |               `.  `.      \\" << std::endl;
std::cout <<"          |   .'       ;   ;               .'  .'`.     \\" << std::endl;
std::cout <<"             \\_  `.       |   \\             .'  .'   /    .'" << std::endl;
std::cout <<"               `.  `-, __ \\   /           .'  .'     |   (" << std::endl;
std::cout <<"               `.  `'` \\|  |           /  .-`     /   .'" << std::endl;
std::cout <<"                   `-._.--t  ;          |_.-)      /  .'" << std::endl;
std::cout <<"                          ; /           \\  /      / .'" << std::endl;
std::cout <<"                         / /             `'     .' /" << std::endl;
std::cout <<"                        /,_\\                  .',_("  << std::endl;
std::cout <<"                       /___(                 /___(            " << std::endl;
}

std::string	Pony::get_breed ( void )
{
	return (this->_breed);	
}

std::string	Pony::get_name( void )
{
	return (this->_breed);
}
