/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: nsarmada <nsarmada@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/03/06 10:17:34 by nsarmada      #+#    #+#                 */
/*   Updated: 2025/03/06 13:44:19 by nsarmada      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
#include <iostream>
#include <cmath>

class Fixed
{
	private:
		int _value;
		static const int fractionalBits = 8;

	public:
		Fixed();
		Fixed(const int value);
		Fixed(const float value);
		Fixed(const Fixed& other);
		~Fixed();
		Fixed &operator=(const Fixed &other);

		int		toInt() const;
		float	toFloat() const;
};

std::ostream& operator<<(std::ostream& outputStream, const Fixed& fixed);

#endif