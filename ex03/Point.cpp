/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtollena <jtollena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 14:30:15 by jtollena          #+#    #+#             */
/*   Updated: 2024/03/28 13:43:50 by jtollena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(): x(0), y(0) {
	return;
}

Point::Point(const float x, const float y): x(x), y(y) {
	return;
}

Point::Point(Point const &point) {
	*this = point;
}

Point::~Point(void){
	return;
}

Point&	Point::operator=(Point const &point){
	new (this)Point(point.getX().toFloat(), point.getY().toFloat());
	return *this;
}

const Fixed Point::getX() const {
	return this->x;
}

const Fixed Point::getY() const {
	return this->y;
}
