/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbogar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/10 11:57:05 by sbogar            #+#    #+#             */
/*   Updated: 2017/07/10 18:10:45 by sbogar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main ( void )
{
	Bureaucrat	samuel("Samuel", 150);
	Bureaucrat	samantha("Samantha", 2);

	std::cout << samuel << std::endl;
	try
	{
		samuel.dec_grade();
		samuel.dec_grade();
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << samantha << std::endl;
	try
	{
		samantha.inc_grade();
		samantha.inc_grade();
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

	return (0);
}
