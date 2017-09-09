/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbogar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/10 11:57:05 by sbogar            #+#    #+#             */
/*   Updated: 2017/07/11 23:06:17 by sbogar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Form.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main ( void )
{
	Bureaucrat				samuel("Samuel", 150);
	Bureaucrat				samantha("Samantha", 2);
	ShrubberyCreationForm 	*shrub = new ShrubberyCreationForm("Shrub");
	RobotomyRequestForm		*Robot = new RobotomyRequestForm("Robo");
	PresidentialPardonForm	*President = new PresidentialPardonForm("Yo mom");

	shrub->set_is_signed(true);
	try
	{
		shrub->Execute(samantha);
		shrub->set_is_signed(false);
		shrub->Execute(samuel);
		shrub->set_is_signed(true);
		shrub->Execute(samuel);
	}
	catch (Form::GradeTooLowException &e)
	{
		std::cout << "exception caught" << std::endl;
	}

	try
	{
		samantha.signForm(*Robot);
		Robot->Execute(samantha);
		Robot->Execute(samuel);
	}
	catch (Form::GradeTooLowException &e)
	{
		std::cout << "exception caught" << std::endl;
	}

	try
	{
	samantha.signForm(*President);
	President->Execute(samantha);
	President->Execute(samuel);
	}	
	catch (Form::GradeTooLowException &e)
	{
		std::cout << "exception caught" << std::endl;
	}
	return (0);
}
