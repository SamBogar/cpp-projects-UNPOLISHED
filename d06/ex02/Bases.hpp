/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bases.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbogar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/12 19:23:39 by sbogar            #+#    #+#             */
/*   Updated: 2017/07/12 19:36:41 by sbogar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASES_HPP
#define BASES_HPP

#include <iostream>
#include <time.h>

class Base{
	public:

	virtual ~Base( void );
};

class A : public Base
{
};

class B : public Base
{
};

class C : public Base
{
};

#endif
