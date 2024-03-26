/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtollena <jtollena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 14:30:10 by jtollena          #+#    #+#             */
/*   Updated: 2024/03/26 13:25:09 by jtollena         ###   ########.fr       */
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
		Fixed(Fixed &fixed);
		Fixed& operator=(Fixed const& fixed);
		int		getRawBits() const;
		void	setRawBits(int const raw);
};

#endif