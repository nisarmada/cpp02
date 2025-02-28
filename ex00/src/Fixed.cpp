/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: nikos <nikos@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/02/28 16:58:31 by nikos         #+#    #+#                 */
/*   Updated: 2025/02/28 17:19:36 by nikos         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../Fixed.hpp"

Fixed::Fixed ()
{
	std::cout << "Default constructor is called" << std::endl;
	this->rawBits = 0;
}


Fixed::~Fixed()
{
	std::cout << "Default destructor is called" << std::endl;
}

Fixed::Fixed (const Fixed& other)
{
	if (this != &other)
		*this = other;
	std::cout << "Copy constructor is called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed& other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
	{
		this->rawBits = other.rawBits;
	}
	return (*this);
}

void Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->rawBits = raw;
}

int Fixed::getRawBits() const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->rawBits);
}