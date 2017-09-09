/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbogar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/06 18:57:00 by sbogar            #+#    #+#             */
/*   Updated: 2017/07/06 22:20:40 by sbogar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.class.hpp"
#include <iostream>

Fixed::Fixed( void ): value(0)
{
}

Fixed::Fixed( Fixed const & src ): value( src.value )
{
}

Fixed::Fixed( int const nbr ): value(nbr << this->f_bits)
{
}

Fixed::Fixed( float const nbr )
{
	float	tmp;

	this->value = 0;
	this->value += (int)nbr;
	tmp = nbr - this->value;
	this->value <<= this->f_bits;

	tmp *= 256;
	this->value |= (unsigned char)tmp;
}

Fixed::~Fixed( void )
{
}


int		Fixed::getRawBits( void ) const
{
	return ( this->value );
}

void	Fixed::setRawBits( int const raw )
{
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


Fixed	& Fixed::operator=( Fixed const & rhs )
{
	this->value = rhs.value;
	return ( *this );
}

bool 			Fixed::operator>=( Fixed const & src)
{
	return ( this->toFloat() >= src.toFloat());
}

bool 			Fixed::operator<=( Fixed const & src)
{
	return ( this->toFloat() <= src.toFloat());
}

bool 			Fixed::operator!=( Fixed const & src)
{
	return ( this->toFloat() != src.toFloat());
}

bool 			Fixed::operator==( Fixed const & src)
{
	return ( this->toFloat() == src.toFloat());
}

bool 			Fixed::operator>( Fixed const & src)
{
	return ( this->toFloat() > src.toFloat());
}

bool 			Fixed::operator<( Fixed const & src)
{
	return ( this->toFloat() < src.toFloat());
}

Fixed 			Fixed::operator+( Fixed const & src )
{
	return Fixed( this->toFloat() + src.toFloat() );
}

Fixed 			Fixed::operator-( Fixed const & src )
{
	return Fixed( this->toFloat() + src.toFloat() );
}

Fixed 			Fixed::operator/( Fixed const & src )
{
	return Fixed( this->toFloat() / src.toFloat() );
}

Fixed 			Fixed::operator*( Fixed const & src )
{
	return Fixed( this->toFloat() * src.toFloat() );
}

Fixed&			Fixed::operator++( void )
{
	unsigned char tmp;

	tmp = (unsigned char)this->value;
	if (tmp != 0b11111111)
		++this->value;
	else
	{
		this->value -= tmp;
		this->value += (1 << this->f_bits);
	}
	return (*this );
}

Fixed			Fixed::operator++(int)
{		
	Fixed temp( *this );

	++(*this);	
	return (temp);
};

Fixed&			Fixed::operator--(){
	unsigned char tmp;

	tmp = (unsigned char)this->value;
	if (tmp != 0)
		--this->value;
	else
	{
		this->value -= 1 << this->f_bits;
		this->value |= (unsigned char)(~0);
	}
	return (*this );
};

Fixed		Fixed::operator--(int){
	Fixed temp( *this );

	++(*this);	
	return (temp);
};

Fixed&		max( Fixed & src1, Fixed & src2){
	return ( src1 > src2 ? src1 : src2);
}

Fixed const &		max( Fixed const& src1, Fixed const & src2){
	return ( src1.toFloat() > src2.toFloat() ? src1 : src2);
}

Fixed &		min( Fixed & src1, Fixed & src2){
	return ( src1 < src2 ? src1 : src2);
}

Fixed const &		min( Fixed const & src1, Fixed const & src2){
	return ( src1.toFloat() < src2.toFloat() ? src1 : src2);
}

std::ostream &	operator<<(std::ostream &o, Fixed const & rhs)
{
	o << rhs.toFloat();
	return o;
}
