/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtollena <jtollena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 14:30:15 by jtollena          #+#    #+#             */
/*   Updated: 2024/03/26 13:26:24 by jtollena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int Fixed::getRawBits() const {
	std::cout << "getRawBits member function called" << std::endl;
	return this->vf;
}

void Fixed::setRawBits(int const raw){
	this->vf = raw;
}

Fixed&	Fixed::operator=(Fixed const &fixed){
	std::cout << "Copy assigment operator called" << std::endl;
	this->vf = fixed.getRawBits();
	return *this;
}

Fixed::Fixed(Fixed &fixed) {
	std::cout << "Copy constructor called" << std::endl;
	*this = fixed;
}

Fixed::Fixed() {
	std::cout << "Default constructor called" << std::endl;
	this->vf = 0;
	return;
}

Fixed::~Fixed(void){
	std::cout << "Destructor called" << std::endl;
	return;
}