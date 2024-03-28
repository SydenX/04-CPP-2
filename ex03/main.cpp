/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtollena <jtollena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 14:29:35 by jtollena          #+#    #+#             */
/*   Updated: 2024/03/28 13:26:30 by jtollena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

int main( void ) {
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;

	Fixed c(3);
	Fixed d(4);
	std::cout << std::endl;
	std::cout << "/ " << c / d << std::endl;
	std::cout << "* " << c * d << std::endl;
	std::cout << "+ " << c + d << std::endl;
	std::cout << "- " << c - d << std::endl;
	std::cout << "c-- " << c-- << std::endl;
	std::cout << "after -- " << c << std::endl;
	std::cout << "--c " << --c << std::endl;
	std::cout << "++ " << c++ << std::endl;
	std::cout << "after ++ " << c << std::endl;
	std::cout << "++c " << ++c << std::endl;
	if (c != d)
		std::cout << "c != d" << std::endl;
	if (c == d)
		std::cout << "c == d" << std::endl;
	if (c < d)
		std::cout << "c < d" << std::endl;
	if (c > d)
		std::cout << "c > d" << std::endl;
	c = d;
	if (c == d)
		std::cout << "c == d" << std::endl;
	if (c != d)
		std::cout << "c != d" << std::endl;
	return 0;
}