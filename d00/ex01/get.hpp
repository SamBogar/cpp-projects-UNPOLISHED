/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbogar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/03 16:43:13 by sbogar            #+#    #+#             */
/*   Updated: 2017/07/03 17:30:23 by sbogar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_HPP
# define GET_HPP

#include "phonebook.hpp"

int		Contact::get_is_assigned( void ){
	return (this->is_assigned);
}

std::string	Contact::get_first( void ){
	return (this->first);
}

std::string	Contact::get_last( void ){
	return (this->last);
}

std::string	Contact::get_nickname( void ){
	return (this->nickname);
}

std::string	Contact::get_login( void ){
	return (this->login);
}

std::string	Contact::get_address( void ){
	return (this->address);
}

std::string	Contact::get_email( void ){
	return (this->email);
}

std::string	Contact::get_phone( void ){
	return (this->phone);
}

std::string	Contact::get_brthdy( void ){
	return (this->brthdy);
}

std::string	Contact::get_fvrt_ml( void ){
	return (this->fvrt_ml);
}

std::string	Contact::get_undr_clr( void ){
	return (this->undr_clr);
}

std::string	Contact::get_secret( void ){
	return (this->secret);
}

#endif
