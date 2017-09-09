/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbogar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/11 19:03:20 by sbogar            #+#    #+#             */
/*   Updated: 2017/07/11 22:46:08 by sbogar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"

class ShrubberyCreationForm : public Form
{
	public:
		ShrubberyCreationForm( void );
	ShrubberyCreationForm( ShrubberyCreationForm const &src );
		ShrubberyCreationForm( std::string _target );
		~ShrubberyCreationForm( void );


	virtual void		Execute( Bureaucrat const & executor ) const;
};

#endif

