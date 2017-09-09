/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbogar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/10 11:56:59 by sbogar            #+#    #+#             */
/*   Updated: 2017/07/11 23:27:50 by sbogar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"


const char* Form::GradeTooLowException::what() const throw()
{
	return ("Grade is too low");
}

const char* Form::GradeTooHighException::what() const throw()
{
	return ("Grade is too high");
}

void		Form::beSigned(Bureaucrat signer) throw(Form::GradeTooLowException)
{
	if (signer.get_grade() <= this->get_sign_grade() && signer.get_grade() != -1)
		this->set_is_signed(true);
	else
		throw ( Form::GradeTooLowException() );
}

Form::Form( void ): is_signed(false), exec_grade(-1), sign_grade(-1)
{
}

Form::Form( Form const &src ): name(src.get_name()), is_signed(src.get_is_signed()), \
								sign_grade(src.get_sign_grade()), exec_grade(src.get_exec_grade()), target(src.get_target())
{
}

Form::Form( std::string _name, std::string _target, int _sign_grade, int _exec_grade ): name(_name), \
											is_signed(0), sign_grade(_sign_grade), exec_grade(_exec_grade), \
											target(_target)
{

}

Form &	Form::operator=( Form const & src)
{
	this->is_signed = src.get_is_signed();

	return (*this);
}

std::ostream &	operator<<( std::ostream & o, Form const & src)
{
	o << "name: " << src.get_name() << ", is_signed: " << src.get_is_signed()
		<< "required grade to sign: " << src.get_sign_grade()
		<< "required grade to execute: " << src.get_exec_grade();
	return (o);
}

Form::~Form( void )
{

}

void		Form::Execute( Bureaucrat const &executor ) const
{
}

std::string Form::get_target( void ) const
{
	return ( this->target );
}

std::string	Form::get_name( void ) const
{
	return ( this->name );
}

bool Form::get_is_signed( void ) const
{
	return (this->is_signed );
}

void	Form::set_is_signed( bool _is_signed)
{
	this->is_signed = _is_signed;
}

int		Form::get_sign_grade( void ) const
{
	return ( this->sign_grade );
}

int		Form::get_exec_grade( void ) const
{
	return ( this->exec_grade );
}
