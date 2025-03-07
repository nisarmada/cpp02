/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nsarmada <nsarmada@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/03/07 12:46:37 by nsarmada      #+#    #+#                 */
/*   Updated: 2025/03/07 12:56:15 by nsarmada      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../Fixed.hpp"

int main()
{
	Fixed a(5.0f);
	Fixed b(2.0f);


	Fixed c = a * b;
	std::cout << "result is " << c << std::endl;
}

