/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtollena <jtollena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 13:28:28 by jtollena          #+#    #+#             */
/*   Updated: 2024/03/28 14:48:28 by jtollena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

float	sign(Point const a, Point const b, Point const c){
	return ((a.getX() - c.getX()) * (b.getY() - c.getY()) - (b.getX() - c.getX()) * (a.getY() - c.getY())).toFloat();
}

bool bsp( Point const a, Point const b, Point const c, Point const point){
	float 	s1, s2, s3;
	bool	has_neg, has_pos;
	s1 = sign(point, a, b);
	s2 = sign(point, b, c);
	s3 = sign(point, c, a);
	has_neg = s1 < 0 || s2 < 0 || s3 < 0;
	has_pos = s1 > 0 || s2 > 0 || s3 > 0;
 	return !(has_neg && has_pos);
}