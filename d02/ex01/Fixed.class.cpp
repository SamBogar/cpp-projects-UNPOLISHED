/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbogar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/06 18:57:00 by sbogar            #+#    #+#             */
/*   Updated: 2017/07/06 21:02:32 by sbogar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.class.hpp"
#include <iostream>

Fixed::Fixed( void ): value(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( Fixed const & src ): value( src.value )
{
	std::cout << "Copy constructor called" << std::endl;
}

Fixed::Fixed( int const nbr ): value(nbr << this->f_bits){
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed( float const nbr )
{
	float	tmp;

	std::cout << "Float constructor called" << std::endl;
	this->value = 0;
	this->value += (int)nbr;
	tmp = nbr - this->value;
	this->value <<= this->f_bits;

	tmp *= 256;
	this->value |= (unsigned char)tmp;
}

Fixed::~Fixed( void )
{
	std::cout << "Destructor called" << std::endl;
}

Fixed	& Fixed::operator=( Fixed const & rhs )
{
	std::cout << "Assignation operator called" << std::endl;
	this->value = rhs.value;
	return ( *this );
}

int		Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return ( this->value );
}

void	Fixed::setRawBits( int const raw )
{
	std::cout << "getRawBits member function called" << std::endl;
	this->value = raw;
}

int		Fixed::toInt( void ) const
{
	return ((int)(this->value >> this->f_bits));
}

float		Fixed::toFloat( void ) const
{
	float			res;
	unsigned char	tmp;

	tmp = (unsigned char)(this->value);
	res = this->value >> this->f_bits;
	res+= (float)tmp / 256.0;
	return (res);
}

std::ostream &	operator<<(std::ostream &o, Fixed const & rhs)
{
	o << rhs.toFloat();
	return o;
}
