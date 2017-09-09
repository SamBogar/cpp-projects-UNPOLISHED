/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbogar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/11 19:19:32 by sbogar            #+#    #+#             */
/*   Updated: 2017/07/11 22:53:50 by sbogar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm( void )
{
}

ShrubberyCreationForm::ShrubberyCreationForm( ShrubberyCreationForm const &src )
{

}

ShrubberyCreationForm::ShrubberyCreationForm( std::string _target): Form("Test Name", _target, 145, 137)
{
}

ShrubberyCreationForm::~ShrubberyCreationForm( void )
{

}
void		ShrubberyCreationForm::Execute( Bureaucrat const & executor ) const
{
	std::ofstream	o;

	o.open(this->target+ "_shrubbery");

	if ( executor.get_grade() <= this->exec_grade && this->is_signed == true )
	{
	o <<
"	       ****" << std::endl <<
"     ********" << std::endl << 
"    **  ******" << std::endl <<
"     *   ******     ******" << std::endl <<
"         ******   *********" << std::endl <<
"          ****  *****   ***" << std::endl <<
"          ***  ***     **" << std::endl <<
"    *************       *" << std::endl <<
"  ******************" << std::endl <<
" *****   H*****H*******" << std::endl <<
" ***     H-___-H  *********" << std::endl <<
"  ***    H     H      *******" << std::endl <<
"   **    H-___-H        *****" << std::endl <<
"     *   H     H         ****" << std::endl <<
"         H     H         ***" << std::endl <<
"         H-___-H         **" << std::endl <<
"         H     H         *" << std::endl <<
"         H-___-H" << std::endl <<
std::endl <<
"         ALOHA!!" << std::endl;
	
	std::cout << " a tree has been planted in  " << this->target << "_shrubbery" << std::endl;
	}
	else if (this->is_signed == false && executor.get_grade() >= this->exec_grade)
		std::cout << "form was not signed!" << std::endl;
	else
		throw (Form::GradeTooLowException());
}
