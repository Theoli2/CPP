/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlivroze <tlivroze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 11:42:00 by tlivroze          #+#    #+#             */
/*   Updated: 2023/12/03 22:04:00 by tlivroze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

#include <string>
#include <iostream>
#include <cctype>
#include <iomanip>
#include <cmath>

class Fixed {
	public:
		Fixed(void);
		Fixed(Fixed const &src);
		Fixed(int const value);
		Fixed(float const value);
		~Fixed(void);
		int getRawBits(void) const;
		void setRawBits(int const raw);
		float toFloat(void) const;
		int toInt(void) const;
		Fixed &operator=(Fixed const &rhs);
		Fixed &operator+(Fixed const &rhs);
		Fixed &operator-(Fixed const &rhs);
		Fixed &operator*(Fixed const &rhs);
		Fixed &operator/(Fixed const &rhs);
		bool operator>(Fixed const &rhs);
		bool operator<(Fixed const &rhs);
		bool operator>=(Fixed const &rhs);
		bool operator<=(Fixed const &rhs);
		bool operator==(Fixed const &rhs);
		bool operator!=(Fixed const &rhs);
		Fixed &operator++(void);
		Fixed &operator--(void);
		Fixed operator++(int);
		Fixed operator--(int);
		static Fixed &min(Fixed &a, Fixed &b);
		static Fixed &max(Fixed &a, Fixed &b);
		static Fixed const &min(Fixed const &a, Fixed const &b);
		static Fixed const &max(Fixed const &a, Fixed const &b);
		
	private:
		int					_value;
		static const int	_bits = 8;
};

std::ostream &operator<<(std::ostream &o, Fixed const &rhs);

#endif