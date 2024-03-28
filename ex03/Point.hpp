/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtollena <jtollena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 14:30:10 by jtollena          #+#    #+#             */
/*   Updated: 2024/03/28 13:41:25 by jtollena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

#include <iostream>
#include "Fixed.hpp"

class Point {
	private:
		Fixed const x;
		Fixed const y;
	public:
		Point();
		Point(const float x, const float y);
		Point(Point const&);
		~Point();
		Point& 	operator=(Point const&);
		const Fixed getX() const;
		const Fixed getY() const;
};

#endif