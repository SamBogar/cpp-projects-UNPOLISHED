/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbogar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/03 15:45:52 by sbogar            #+#    #+#             */
/*   Updated: 2017/07/03 16:46:41 by sbogar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SET_HPP
# define SET_HPP

#include "phonebook.hpp"

void	Contact::set_is_assigned( int is_assigned){
	this->is_assigned = is_assigned;
}

void	Contact::set_first( void ){
	std::string buff;

	std::cout << "What's their first name?" << std::endl;
	std::getline(std::cin, buff, '\n');
	this->first = buff;
}

void	Contact::set_last( void ){
	std::string buff;

	std::cout << "What's their last name?" << std::endl;
	std::getline(std::cin, buff, '\n');
	this->last = buff;
}

void	Contact::set_nickname( void ){
	std::string buff;

	std::cout << "What's their nickname?" << std::endl;
	std::getline(std::cin, buff, '\n');
	this->nickname = buff; 
}

void	Contact::set_login( void ){
	std::string buff;

	std::cout << "What's their login?" << std::endl;
	std::getline(std::cin, buff, '\n');
	this->login = buff;
}

void	Contact::set_address( void ){
	std::string buff;

	std::cout << "What's their postal address?" << std::endl;
	std::getline(std::cin, buff, '\n');
	this->address = buff;
}

void	Contact::set_email( void ){
	std::string buff;

	std::cout << "What's their email address?" << std::endl;
	std::getline(std::cin, buff, '\n');
	this->email = buff;
}

void	Contact::set_phone( void ){
	std::string buff;

	std::cout << "What's their phone number?" << std::endl;
	std::getline(std::cin, buff, '\n');
	this->phone = buff;
}

void	Contact::set_brthdy( void ){
	std::string buff;

	std::cout << "What's their birthday date?" << std::endl;
	std::getline(std::cin, buff, '\n');
	this->brthdy = buff;
}

void	Contact::set_fvrt_ml( void ){
	std::string buff;

	std::cout << "What's their favorite meal?" << std::endl;
	std::getline(std::cin, buff, '\n');
	this->fvrt_ml = buff;
}

void	Contact::set_undr_clr( void ){
	std::string buff;

	std::cout << "What's their underwear color?" << std::endl;
	std::getline(std::cin, buff, '\n');
	this->undr_clr = buff;
}

void	Contact::set_secret( void ){
	std::string buff;

	std::cout << "What's their darkest secret?" << std::endl;
	std::getline(std::cin, buff, '\n');
	this->secret = buff;
}

#endif
