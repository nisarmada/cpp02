/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FixedOperators.cpp                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: nsarmada <nsarmada@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/03/07 12:23:28 by nsarmada      #+#    #+#                 */
/*   Updated: 2025/03/07 16:32:56 by nsarmada      ########   odam.nl         */
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

Fixed Fixed::operator++() {
	this->_value += 1;
	return (*this);
}

Fixed Fixed::operator++(int) {
	Fixed temp(*this);

	this->_value += 1;
	return (temp);
}

Fixed Fixed::operator--() {
	this->_value -= 1;
	return (*this);
}

Fixed Fixed::operator--(int) {
	Fixed temp(*this);

	this->_value -= 1;
	return (temp);
}

Fixed& Fixed::min(Fixed &a, Fixed &b) {
	if (b < a)
		return (b);
	else
		return (a);
}

const Fixed& Fixed::min(const Fixed &a, const Fixed &b) {
	if (b < a)
		return (b);
	else
		return (a);
}

const Fixed& Fixed::max(const Fixed &a, const Fixed &b) {
	if (b > a)
		return (b);
	else
		return (a);
}

Fixed& Fixed::max(Fixed &a, Fixed &b) {
	if (b > a)
		return (b);
	else
		return (a);
}