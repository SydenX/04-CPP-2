/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtollena <jtollena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 14:30:10 by jtollena          #+#    #+#             */
/*   Updated: 2024/03/26 15:17:26 by jtollena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed {
	private:
		int	vf;
		static const int bits = 8;
	public:
		Fixed();
		~Fixed();
		Fixed(Fixed const &fixed);
		Fixed(const int toVf);
		Fixed(const float toVf);
		float	toFloat() const;
		int		toInt() const;
		static const Fixed& 	max(Fixed const& first, Fixed const& second);
		static const Fixed& 	min(Fixed const& first, Fixed const& second);
		static Fixed& 	max(Fixed & first, Fixed & second);
		static Fixed& 	min(Fixed & first, Fixed & second);
		Fixed& 	operator=(Fixed const&);
		Fixed 	operator+(Fixed const&) const;
		Fixed 	operator-(Fixed const&) const;
		Fixed 	operator*(Fixed const&) const;
		Fixed 	operator/(Fixed const&) const;
		bool 	operator==(Fixed const&) const;
		bool 	operator!=(Fixed const&) const;
		bool 	operator>(Fixed const&) const;
		bool 	operator>=(Fixed const&) const;
		bool 	operator<(Fixed const&) const;
		bool 	operator<=(Fixed const&) const;
		Fixed	operator++();
		Fixed	operator--();
		Fixed	operator++(int);
		Fixed	operator--(int);
		int		getRawBits() const;
		void	setRawBits(int const raw);
};

std::ostream&	operator<<(std::ostream& o, Fixed const&);

#endif