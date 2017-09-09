/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbogar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/11 19:19:32 by sbogar            #+#    #+#             */
/*   Updated: 2017/07/11 23:02:12 by sbogar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include <fstream>

PresidentialPardonForm::PresidentialPardonForm( void )
{
}

PresidentialPardonForm::PresidentialPardonForm( PresidentialPardonForm const &src )
{

}

PresidentialPardonForm::PresidentialPardonForm( std::string _target): Form("Test Name", _target, 25, 5)
{
}

PresidentialPardonForm::~PresidentialPardonForm( void )
{

}


void		PresidentialPardonForm::Execute( Bureaucrat const & executor ) const
{
	if ( executor.get_grade() <= this->exec_grade && this->is_signed == true )
	{
		std::cout << this->target << " has been pardoned by Zafod Beeblebrox" << std::endl;	
	}
	else if (this->is_signed == false && executor.get_grade() >= this->exec_grade)
		std::cout << "form was not signed!" << std::endl;
	else
		throw (Form::GradeTooLowException());
}
