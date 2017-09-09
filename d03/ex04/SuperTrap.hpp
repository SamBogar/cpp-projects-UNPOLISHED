/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbogar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/06 23:40:07 by sbogar            #+#    #+#             */
/*   Updated: 2017/07/07 21:06:26 by sbogar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "NinjaTrap.hpp"


class SuperTrap : public NinjaTrap, public FragTrap
{
public:
	SuperTrap( void );
	SuperTrap( SuperTrap &src );
	SuperTrap( std::string name );
	~SuperTrap( void );

	SuperTrap &		operator=( SuperTrap const & src);
	int				rangedAttack(std::string const & target);
	int				meleeAttack(std::string const & target);
private:
};

#endif
