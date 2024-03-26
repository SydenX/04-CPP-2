/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtollena <jtollena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 14:30:15 by jtollena          #+#    #+#             */
/*   Updated: 2024/03/26 13:58:20 by jtollena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() {
	std::cout << "Default constructor called" << std::endl;
	this->vf = 0;
	return;
}

Fixed::~Fixed(void){
	std::cout << "Destructor called" << std::endl;
	return;
}

Fixed::Fixed(Fixed const &fixed) {
	std::cout << "Copy constructor called" << std::endl;
	*this = fixed;
}

Fixed::Fixed(const int toVf) {
	std::cout << "Int constructor called" << std::endl;
	this->vf = (toVf * (1 << this->bits));
}

Fixed::Fixed(const float toVf) {
	std::cout << "Float constructor called" << std::endl;
	this->vf = roundf(toVf * (1 << this->bits));
}

Fixed&	Fixed::operator=(Fixed const &fixed){
	std::cout << "Copy assigment operator called" << std::endl;
	this->vf = fixed.getRawBits();
	return *this;
}

std::ostream&	operator<<(std::ostream &output, Fixed const &fixed){
	output << fixed.toFloat();
	return output;
}

int Fixed::getRawBits() const {
	return this->vf;}

void Fixed::setRawBits(int const raw){
	this->vf = raw;}

int	Fixed::toInt() const{
	return (int)(((float)this->vf / (float)(1 << this->bits)));}

float	Fixed::toFloat() const{
	return ((float)this->vf / (float)(1 << this->bits));}