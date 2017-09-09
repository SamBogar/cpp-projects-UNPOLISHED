/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbogar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/10 11:56:59 by sbogar            #+#    #+#             */
/*   Updated: 2017/07/11 19:01:12 by sbogar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade is too low to decrement");
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade is too high to increment");
}

Bureaucrat::Bureaucrat( void )
{
}

Bureaucrat::Bureaucrat( Bureaucrat const &src )
{
	this->grade = src.grade;
}

Bureaucrat::Bureaucrat( std::string _name, int _grade ): name(_name), grade(_grade)
{
}

Bureaucrat &	Bureaucrat::operator=( Bureaucrat const & src)
{
	this->grade = src.grade;

	return (*this);
}

std::ostream &	operator<<( std::ostream & o, Bureaucrat const & src)
{
	o << src.get_name() << ", bureaucrat grade " << src.get_grade();
	return (o);
}

Bureaucrat::~Bureaucrat( void )
{

}

int			Bureaucrat::get_grade( void ) const
{
	return ( this->grade );
}

std::string	Bureaucrat::get_name( void ) const
{
	return ( this->name );
}

void			Bureaucrat::signForm( Form & doc )
{
	try
	{
		doc.beSigned( *this );
		std::cout << this->get_name() << " signs " << doc.get_name() << std::endl;
	}
	catch (Form::GradeTooLowException &e)
	{
		std::cout << this->get_name() << " cannot sign " << doc.get_name() << " because their grade is not high enough" << std::endl;
	}
}

void			Bureaucrat::inc_grade( void ) throw(Bureaucrat::GradeTooHighException)
{
		if ( this->grade > 1 )
			this->grade--;
		else
			throw Bureaucrat::GradeTooHighException();
}

void	Bureaucrat::dec_grade( void ) throw(Bureaucrat::GradeTooLowException)
{
		if ( this->grade < 150 )
			this->grade++;
		else
			throw Bureaucrat::GradeTooLowException();
}
