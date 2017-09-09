/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbogar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/10 11:56:55 by sbogar            #+#    #+#             */
/*   Updated: 2017/07/11 23:27:34 by sbogar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <stdexcept>
#include <stdbool.h>
#include "Bureaucrat.hpp"

class	Bureaucrat;

class	Form
{
	public:

	Form( void );
	Form( Form const &src );
	Form( std::string _name, std::string _target, int _sign_grade, int _exec_grade );
	virtual ~Form( void );

	Form &		operator=( Form const & src);

	
	class GradeTooLowException : public std::exception
	{
		virtual const char* what() const throw();
	};

	class GradeTooHighException : public std::exception
	{
		virtual const char* what() const throw();
	};

	void		beSigned(Bureaucrat signer) throw(GradeTooLowException);
	std::string get_name( void ) const;
	bool		get_is_signed( void ) const;
	void		set_is_signed( bool _is_signed);
	int			get_sign_grade( void ) const;
	int			get_exec_grade( void ) const;
	std::string get_target( void ) const;

	virtual void		Execute( Bureaucrat const & executor ) const;

	protected:
	std::string	const	name;
	std::string	const	target;
	bool				is_signed;
	int	const			sign_grade;
	int	const			exec_grade;
};


std::ostream &		operator<<( std::ostream & o, Form const & src );

#endif
