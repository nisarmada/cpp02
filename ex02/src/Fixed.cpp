/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: nsarmada <nsarmada@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/03/07 12:11:22 by nsarmada      #+#    #+#                 */
/*   Updated: 2025/03/07 16:03:54 by nsarmada      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../Fixed.hpp"

Fixed::Fixed():_value(0){
	// std::cout << "Default constructor is called" << std::endl;
}

Fixed::Fixed(const int value): _value(value << fractionalBits){
	// std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float value): _value(roundf(value * (1 << fractionalBits))){
	// std::cout << "Float constructor is called" << std::endl;
}

Fixed::~Fixed(){
	// std::cout << "Destructor is called" << std::endl;
}


Fixed::Fixed(const Fixed &other){
	// std::cout << "Copy constructor is called" << std::endl;
	if (this != &other)
	{
		*this = other;
	}
}

Fixed& Fixed::operator=(const Fixed &other)
{
	// std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
	{
		this->_value = other._value;
	}
	return (*this);
}

int Fixed::toInt() const {
	return (_value >> fractionalBits);
}

float Fixed::toFloat() const {
	return ((float)_value / (1 << fractionalBits));
}

std::ostream& operator<<(std::ostream& outputStream, const Fixed& fixed){
	outputStream << fixed.toFloat();
	return (outputStream);
}

