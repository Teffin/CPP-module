/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hharrold <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 19:17:04 by hharrold          #+#    #+#             */
/*   Updated: 2020/11/26 19:17:05 by hharrold         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed( void ):fixedPointValue(0) {
	std::cout << "Default constructor called" << std::endl;
	return;
}

Fixed::Fixed(const int & value): fixedPointValue(numberFractionalBits << value) {
	std::cout << "Int constructor called" << std::endl;
	return;
}

Fixed::Fixed(const float & value) {
	std::cout << "Float constructor called" << std::endl;
	fixedPointValue = roundf(value * (1 << numberFractionalBits));
	return;
}

Fixed::~Fixed( void ) {
	std::cout << "Destructor called" << std::endl;
	return;
}

Fixed::Fixed(const Fixed &src) {
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return;
}

Fixed & Fixed::operator=(Fixed const & rhs) {
	std::cout << "Assignation operator called" << std::endl;
	this->fixedPointValue = rhs.getRawBits();
	return *this;
}

int Fixed::getRawBits( void ) const {
	std::cout << "getRawBits member function called" << std::endl;
	return this->fixedPointValue;
}

void Fixed::setRawBits(const int raw) {
	std::cout << "setRawBits member function called" << std::endl;
	this->fixedPointValue = raw;
}

int Fixed::toInt( void ) const {

	return fixedPointValue >> numberFractionalBits;
}


float  Fixed::toFloat( void ) const {
	return ((float)fixedPointValue / (float)( 1 << numberFractionalBits));
}

std::ostream& operator<<(std::ostream &out, const Fixed& fixed)
{
	out << fixed.toFloat();
	return out;
}