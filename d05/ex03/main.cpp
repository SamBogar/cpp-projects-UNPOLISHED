/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbogar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/10 11:57:05 by sbogar            #+#    #+#             */
/*   Updated: 2017/07/11 23:26:19 by sbogar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Form.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main ( void )
{
	Intern someRando;
	Form	*rrrf;
	Bureaucrat sam("sam", 1);

	rrrf = someRando.makeForm("robotomy request", "Bender");
	sam.signForm(*rrrf);
	rrrf->Execute( sam );
	return (0);
}
