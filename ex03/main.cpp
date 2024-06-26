/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtollena <jtollena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 14:29:35 by jtollena          #+#    #+#             */
/*   Updated: 2024/04/03 11:43:50 by jtollena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Point.hpp"

/*
		    p2(3, 3)
			  /  \
			 /    \
	p1(0, 0) ------ p3(6, 0)
*/

int main( void ) {
	Point p1 = Point(0, 0);
	Point p2 = Point(3, 3);
	Point p3 = Point(6, 0);
	Point pt = Point(0, 0);
	std::cout << bsp(p1 ,p2, p3, pt) << std::endl;
	pt = Point(0, 1);
	std::cout << bsp(p1 ,p2, p3, pt) << std::endl;
	pt = Point(3, 4);
	std::cout << bsp(p1 ,p2, p3, pt) << std::endl;
	pt = Point(2, 2);
	std::cout << bsp(p1 ,p2, p3, pt) << std::endl;
	return 0;
}