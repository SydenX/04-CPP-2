/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtollena <jtollena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 14:30:15 by jtollena          #+#    #+#             */
/*   Updated: 2024/03/26 15:19:15 by jtollena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() {
	this->vf = 0;
	return;
}

Fixed::~Fixed(void){
	return;
}

Fixed::Fixed(Fixed const &fixed) {
	*this = fixed;
}

Fixed::Fixed(const int toVf) {
	this->vf = (toVf * (1 << this->bits));
}

Fixed::Fixed(const float toVf) {
	this->vf = roundf(toVf * (1 << this->bits));
}

Fixed&	Fixed::operator=(Fixed const &fixed){
	this->vf = fixed.getRawBits();
	return *this;
}

Fixed	Fixed::operator+(Fixed const &fixed) const{
	return Fixed(this->toFloat() + fixed.toFloat());

}

Fixed	Fixed::operator-(Fixed const &fixed) const{
	return Fixed(this->toFloat() - fixed.toFloat());

}

Fixed	Fixed::operator*(Fixed const &fixed) const{
	return Fixed(this->toFloat() * fixed.toFloat());
}

Fixed	Fixed::operator/(Fixed const &fixed) const{
	return Fixed(this->toFloat() / fixed.toFloat());
}

bool	Fixed::operator>(Fixed const &fixed) const{
	return (this->vf > fixed.getRawBits());
}

bool	Fixed::operator>=(Fixed const &fixed) const{
	return (this->vf >= fixed.getRawBits());
}

bool	Fixed::operator<(Fixed const &fixed) const{
	return (this->vf < fixed.getRawBits());
}

bool	Fixed::operator<=(Fixed const &fixed) const{
	return (this->vf <= fixed.getRawBits());
}

bool	Fixed::operator==(Fixed const &fixed) const{
	return (this->vf == fixed.getRawBits());
}

bool	Fixed::operator!=(Fixed const &fixed) const{
	return (this->vf != fixed.getRawBits());
}

Fixed	Fixed::operator++() {
	this->vf++;
	return *this;
}

Fixed	Fixed::operator--() {
	this->vf--;
	return *this;
}

Fixed	Fixed::operator++(int) {
	Fixed tmp = Fixed(*this);
	this->vf++;
	return tmp;
}

Fixed	Fixed::operator--(int) {
	Fixed tmp = Fixed(*this);
	this->vf--;
	return tmp;
}

Fixed const& 	Fixed::max(Fixed const& first, Fixed const& second){
	if (first.toFloat() >= second.toFloat())
		return first;
	return second;
}

Fixed const& 	Fixed::min(Fixed const& first, Fixed const& second){
	if (first.toFloat() <= second.toFloat())
		return first;
	return second;
}

Fixed& 	Fixed::max(Fixed& first, Fixed& second){
	if (first.toFloat() >= second.toFloat())
		return first;
	return second;
}

Fixed& 	Fixed::min(Fixed& first, Fixed& second){
	if (first.toFloat() <= second.toFloat())
		return first;
	return second;
}

std::ostream&	operator<<(std::ostream &output, Fixed const &fixed){
	output << fixed.toFloat();
	return output;
}

std::istream&	operator>>(std::istream &input, Fixed const &fixed){
	// input >> fixed.setRawBits();
	fixed.getRawBits();
	return input;
}

int Fixed::getRawBits() const {
	return this->vf;}

void Fixed::setRawBits(int const raw){
	this->vf = raw;}

int	Fixed::toInt() const{
	return (int)(((float)this->vf / (float)(1 << this->bits)));}

float	Fixed::toFloat() const{
	return ((float)this->vf / (float)(1 << this->bits));}