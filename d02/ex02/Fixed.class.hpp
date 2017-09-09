/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbogar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/06 16:50:22 by sbogar            #+#    #+#             */
/*   Updated: 2017/07/06 22:28:11 by sbogar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_CLASS_HPP
# define FIXED_CLASS_HPP

#include <iostream>
#include <cmath>

class Fixed
{
	public:
		Fixed( void );
		Fixed( Fixed const & src );
		~Fixed( void );

		Fixed( int const nbr );
		Fixed( float const nbr );

		Fixed & operator=( Fixed const & src);
		bool 			operator>=( Fixed const & src);
		bool 			operator<=( Fixed const & src);
		bool 			operator!=( Fixed const & src);
		bool 			operator==( Fixed const & src);
		bool 			operator<( Fixed const & src);
		bool 			operator>( Fixed const & src);

		Fixed 			operator*( Fixed const & src);
		Fixed 			operator/( Fixed const & src);
		Fixed 			operator+( Fixed const & src);
		Fixed 			operator-( Fixed const & src);

		Fixed&			operator++( void );
		Fixed			operator++( int );
		Fixed&			operator--( void );
		Fixed			operator--( int );

		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
		float	toFloat( void ) const;
		int		toInt( void ) const;
	private:
		int					value;
		static const int	f_bits = 8;
};

std::ostream &		operator<<( std::ostream & o, Fixed const & i);

Fixed const &		min( Fixed const & src1, Fixed const & src2);
Fixed &		min( Fixed & src1, Fixed & src2);
Fixed const &		max( Fixed const& src1, Fixed const & src2);
Fixed&		max( Fixed & src1, Fixed & src2);
#endif
