/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbogar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/11 23:10:48 by sbogar            #+#    #+#             */
/*   Updated: 2017/07/11 23:33:01 by sbogar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern( void)
{
}

Intern::Intern( Intern & src )
{

}

Intern::~Intern( void )
{

}

Form	*Intern::makeForm(std::string request, std::string target)
{
	Form	*res;
	
	res = 0;
	if (request == "robotomy request")
	{
		std::cout << "Intern creates ";
		res = new RobotomyRequestForm( target );
		std::cout << request << std::endl;
	}
	else if (request == "shrubbery creation")
	{
		std::cout << "Intern creates ";
		std::cout << request << std::endl;
		res = new ShrubberyCreationForm( target );
	}
	else if (request == "presidential pardon")
	{
		std::cout << "Intern creates ";
		std::cout << request << std::endl;
		res = new PresidentialPardonForm( target );
	}
	else
		std::cout << "error, that is not a known form type" << std::endl;
	return (res);
}
