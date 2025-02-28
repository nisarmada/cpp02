/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: nikos <nikos@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/02/28 16:38:03 by nikos         #+#    #+#                 */
/*   Updated: 2025/02/28 17:21:39 by nikos         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>


class Fixed {
private:
	int rawBits;
	static const int fractionalBits = 8;
public:
	Fixed();
	~Fixed();
	Fixed (const Fixed& other);
	Fixed& operator=(const Fixed& other);

	void setRawBits(int const raw);
	int getRawBits() const;
};



#endif