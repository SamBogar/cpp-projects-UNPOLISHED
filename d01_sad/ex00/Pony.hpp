/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbogar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/05 16:23:59 by sbogar            #+#    #+#             */
/*   Updated: 2017/07/05 17:39:05 by sbogar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP
# define PONY_HPP

class Pony {
public:
	Pony (std::string n_name, std::string n_breed): _name(n_name), _breed(n_breed)
	{
		std::cout << this->_name << " created" << std::endl;	
	}
	
	~Pony()
	{
		std::cout << this->_name << " destroyed" << std::endl;	
	}

	void	neigh( void );
	void	gallop( int mph );
	void	pose( void );

	int			_weight;
	int			_top_mph;

	std::string	get_breed( void );
	std::string	get_name( void );

	void		set_name(std::string new_name) { this->_name = new_name; }
	void		set_breed(std::string new_breed) { this->_breed = new_breed; }

private:	
	std::string 	_name;
	std::string 	_breed;
};

#endif
