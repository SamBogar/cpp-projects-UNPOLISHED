/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbogar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/11 19:19:32 by sbogar            #+#    #+#             */
/*   Updated: 2017/07/11 23:01:24 by sbogar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm( void )
{
}

RobotomyRequestForm::RobotomyRequestForm( RobotomyRequestForm const &src )
{

}

RobotomyRequestForm::RobotomyRequestForm( std::string _target): Form("Test Name", _target, 72, 45)
{
	srand (time(0));
}

RobotomyRequestForm::~RobotomyRequestForm( void )
{

}


void		RobotomyRequestForm::Execute( Bureaucrat const & executor ) const
{
	if ( executor.get_grade() <= this->exec_grade && this->is_signed == true )
	{
	std::cout << "bzzzz ** bzz ** SCRERK ** bzzzzzzzzz*" << std::endl;
	if( rand() % 2 )
		std::cout << this->target << " has been succesfully robotomized!" << std::endl;
	else
		std::cout << this->target << " failed to be robotomized! Oh no!" << std::endl;}
	else if (this->is_signed == false && executor.get_grade() >= this->exec_grade)
		std::cout << "form was not signed!" << std::endl;
	else
		throw (Form::GradeTooLowException());
}
