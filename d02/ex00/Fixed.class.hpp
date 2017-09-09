/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbogar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/06 16:50:22 by sbogar            #+#    #+#             */
/*   Updated: 2017/07/06 19:05:04 by sbogar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_CLASS_HPP
# define FIXED_CLASS_HPP

class Fixed
{
	public:
		Fixed( void );
		Fixed ( Fixed const & src );
		Fixed & operator=( Fixed const & src);
		~Fixed( void );

		int		getRawBits( void ) const;
		void	setRawBits( int const raw );

	private:
		int					value;
		static const int	f_bits = 8;
};

#endif
