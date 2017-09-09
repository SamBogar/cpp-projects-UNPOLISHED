/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbogar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/05 18:02:05 by sbogar            #+#    #+#             */
/*   Updated: 2017/07/05 18:27:14 by sbogar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Zombie{

public:
	Zombie(std::string name, std::string type): _type(type), _name(name)
	{
		
	}

	~Zombie()
	{

	}

	void	announce( void ){ 
		std::cout <<
			"<" << this->_name << " ("
			<< this->_type << ")> " <<
		   	"BRAAAAIIIIIIINSSSSS!!!!";
		
	}

	void	set_type(std::string type);
	void	set_name(std::string name);

private:
	std::string	_type;
	std::string	_name;

};

