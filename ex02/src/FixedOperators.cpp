/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FixedOperators.cpp                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: nsarmada <nsarmada@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/03/07 12:23:28 by nsarmada      #+#    #+#                 */
/*   Updated: 2025/03/07 12:49:50 by nsarmada      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../Fixed.hpp"

bool Fixed::operator<(const Fixed &other) const
{
	if (this->_value < other._value)
		return (true);
	return (false);
}

bool Fixed::operator>(const Fixed &other) const {
	return (this->_value > other._value);
}

bool Fixed::operator<=(const Fixed &other) const{
	return (this->_value <= other._value);
}

bool Fixed::operator>=(const Fixed &other) const {
	return (this->_value >= other._value);
}

bool Fixed::operator==(const Fixed &other) const {
	return (this->_value == other._value);
}

bool Fixed::operator!=(const Fixed &other) const {
	return (this->_value != other._value);
}

Fixed Fixed::operator+(const Fixed &other) const {
	Fixed result;

	result._value = this->_value + other._value;
	return (result);
}

Fixed Fixed::operator-(const Fixed &other) const {
	Fixed result;

	result._value = this->_value - other._value;
	return (result);
}

Fixed Fixed::operator*(const Fixed &other) const {
	Fixed result;

	result._value = (this->_value * other._value) >> fractionalBits;
	return (result);
}

Fixed Fixed::operator/(const Fixed &other) const {
	Fixed result;
	
	result._value = this->_value / other._value;
	return (result);
}