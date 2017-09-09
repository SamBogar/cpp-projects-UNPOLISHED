/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbogar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/06 23:40:07 by sbogar            #+#    #+#             */
/*   Updated: 2017/07/07 21:02:21 by sbogar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap{
public:
	ScavTrap( void );
	ScavTrap( ScavTrap &src );
	ScavTrap( std::string name );
	~ScavTrap( void );

	ScavTrap &		operator=( ScavTrap const & src);
	void			challengeNewcomer( std::string const & target );
	int				rangedAttack(std::string const & target);
	int				meleeAttack(std::string const & target);
private:
};

#endif
