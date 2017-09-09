/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbogar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/06 23:40:07 by sbogar            #+#    #+#             */
/*   Updated: 2017/07/07 21:14:37 by sbogar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"


class NinjaTrap : public ClapTrap
{
public:
	NinjaTrap( void );
	NinjaTrap( NinjaTrap &src );
	NinjaTrap( std::string name );
	~NinjaTrap( void );

	NinjaTrap &	operator=( NinjaTrap const & src);
	int			ninjaShoebox(FragTrap & victim);
	int			ninjaShoebox(ScavTrap & victim);
	int			ninjaShoebox(NinjaTrap & victim);
private:
};

#endif
