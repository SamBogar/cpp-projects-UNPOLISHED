/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbogar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/03 14:51:57 by sbogar            #+#    #+#             */
/*   Updated: 2017/07/03 17:32:22 by sbogar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>

class Contact {

	public:

		void		set_is_assigned (int is_assigned);
		void		set_first( void );
		void		set_last( void);
		void		set_nickname( void);
		void		set_login( void);
		void		set_address( void);
		void		set_email( void);
		void		set_phone( void);
		void		set_brthdy( void);
		void		set_fvrt_ml( void);
		void		set_undr_clr( void);
		void		set_secret( void);

		int			get_is_assigned( void );
		std::string	get_first( void );
		std::string	get_last( void );
		std::string	get_nickname( void );
		std::string	get_login( void);
		std::string	get_address( void);
		std::string	get_email( void);
		std::string	get_phone( void);
		std::string	get_brthdy( void);
		std::string	get_fvrt_ml( void);
		std::string	get_undr_clr( void);
		std::string	get_secret( void);

	private:
		int		is_assigned;
		std::string	first;
		std::string	last;
		std::string	nickname;
		std::string	login;
		std::string	address;
		std::string	email;
		std::string	phone;
		std::string	brthdy;
		std::string	fvrt_ml;
		std::string	undr_clr;
		std::string	secret;

};

#endif
