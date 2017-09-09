/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbogar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/10 11:57:05 by sbogar            #+#    #+#             */
/*   Updated: 2017/07/11 18:58:17 by sbogar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main ( void )
{
	Bureaucrat	samuel("Samuel", 150);
	Bureaucrat	samantha("Samantha", 2);
	Form		expel("Expellation form", 75, 100); 
	Form		enroll("Enroll form", 75, 100); 

	std::cout << samuel << std::endl;
	std::cout << samantha << std::endl;

	samuel.signForm(expel);
	samantha.signForm(enroll);
	return (0);
}
