/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbogar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/13 18:42:28 by sbogar            #+#    #+#             */
/*   Updated: 2017/07/14 20:01:23 by sbogar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <vector>
#include <algorithm>
#include <list>

template < typename T >
typename T::const_iterator 	easyfind(T const & cont, int n) throw(std::exception)
{
	typename T::const_iterator	itb;
	typename T::const_iterator	ite;
	typename T::const_iterator	res;

	itb = cont.begin();
	ite = cont.end();
	res = std::find( itb, ite, n);
	if (res == ite && *ite != n)
		throw(std::exception());
	
	return (res);
}

#endif
