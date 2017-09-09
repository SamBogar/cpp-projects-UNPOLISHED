/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbogar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/06 23:40:07 by sbogar            #+#    #+#             */
/*   Updated: 2017/07/07 21:00:45 by sbogar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"


class NinjaTrap : virtual public ClapTrap
{
public:
	NinjaTrap( void );
	NinjaTrap( NinjaTrap &src );
	NinjaTrap( std::string name );
	~NinjaTrap( void );

	NinjaTrap &		operator=( NinjaTrap const & src);
	int			ninjaShoebox(FragTrap & victim);
	int			ninjaShoebox(ScavTrap & victim);
	int			ninjaShoebox(NinjaTrap & victim);
	int			rangedAttack(std::string const & target);
	int			meleeAttack(std::string const & target);
private:
};

#endif
