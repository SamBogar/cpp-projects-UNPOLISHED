/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbogar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/10 11:56:55 by sbogar            #+#    #+#             */
/*   Updated: 2017/07/11 15:49:07 by sbogar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdexcept>

class	Bureaucrat
{
	public:

	Bureaucrat( void );
	Bureaucrat( Bureaucrat const &src );
	Bureaucrat( std::string name, int grade);
	~Bureaucrat( void );

	Bureaucrat &		operator=( Bureaucrat const & src);

	class GradeTooLowException : public std::exception
	{
		virtual const char* what() const throw();
	};

	class GradeTooHighException : public std::exception
	{
		virtual const char* what() const throw();
	};

	void		inc_grade( void ) throw(GradeTooHighException);
	void		dec_grade( void ) throw(GradeTooLowException);
	
	int			get_grade( void ) const;
	std::string	get_name( void ) const ;

	private:
		std::string const	name;
		int					grade;
};


std::ostream &		operator<<( std::ostream & o, Bureaucrat const & src );
