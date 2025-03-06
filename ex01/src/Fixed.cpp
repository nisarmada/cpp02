/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: nsarmada <nsarmada@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/03/06 12:21:26 by nsarmada      #+#    #+#                 */
/*   Updated: 2025/03/06 13:47:26 by nsarmada      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../Fixed.hpp"

Fixed::Fixed():_value(0){
	std::cout << "Default constructor is called" << std::endl;
}

Fixed::Fixed(const int value): _value(value << fractionalBits){
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float value): _value(roundf(value * (1 << fractionalBits))){
	std::cout << "Float constructor is called" << std::endl;
}

Fixed::~Fixed(){
	std::cout << "Destructor is called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed &other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
	{
		this->_value = other._value;
	}
	return (*this);
}

Fixed::Fixed(const Fixed &other){
	std::cout << "Copy constructor is called" << std::endl;
	if (this != &other)
	{
		*this = other;
	}
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