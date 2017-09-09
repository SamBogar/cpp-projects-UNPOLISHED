/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbogar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/11 19:03:20 by sbogar            #+#    #+#             */
/*   Updated: 2017/07/11 22:46:20 by sbogar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"

class PresidentialPardonForm : public Form
{
	public:
		PresidentialPardonForm( void );
		PresidentialPardonForm( PresidentialPardonForm const &src );
		PresidentialPardonForm( std::string _target );
		~PresidentialPardonForm( void );

	virtual void		Execute( Bureaucrat const & executor ) const;
};

#endif

