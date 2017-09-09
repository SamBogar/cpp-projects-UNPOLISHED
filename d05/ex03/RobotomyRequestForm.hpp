/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbogar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/11 19:03:20 by sbogar            #+#    #+#             */
/*   Updated: 2017/07/11 22:46:30 by sbogar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"

class RobotomyRequestForm : public Form
{
	public:
		RobotomyRequestForm( void );
		RobotomyRequestForm( RobotomyRequestForm const &src );
		RobotomyRequestForm( std::string _target);
		~RobotomyRequestForm( void );

	virtual void		Execute( Bureaucrat const & executor ) const;
};

#endif
