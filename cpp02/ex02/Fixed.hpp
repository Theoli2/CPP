/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlivroze <tlivroze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 19:38:14 by tlivroze          #+#    #+#             */
/*   Updated: 2023/12/04 23:00:10 by tlivroze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <string>
#include <iostream>
#include <cctype>
#include <iomanip>
#include <cmath>


class Fixed
{
private:
	int _value;
	static const int _bits = 8;
public:
	Fixed();
	Fixed(int const value);
	Fixed(float const value);
	Fixed(const Fixed& obj);
	Fixed& operator=(const Fixed& obj);
	bool operator>(const Fixed& obj);
	bool operator<(const Fixed& obj);
	bool operator>=(const Fixed& obj);
	bool operator<=(const Fixed& obj);
	bool operator==(const Fixed& obj);
	bool operator!=(const Fixed& obj);
	Fixed& operator+(const Fixed& obj);
	Fixed& operator-(const Fixed& obj);
	Fixed& operator*(const Fixed& obj);
	Fixed& operator/(const Fixed& obj);
	Fixed& operator++();
	Fixed operator++(int);
	Fixed& operator--();
	Fixed operator--(int);
	static Fixed& min(Fixed& x, Fixed& y);
	static const Fixed& min(const Fixed& x, const Fixed& y);
	static Fixed& max(Fixed& x, Fixed& y);
	static const Fixed& max(const Fixed& x, const Fixed& y);
	~Fixed();
	int getRawBits ( void ) const;
	void setRawBits (int const raw);
	float toFloat(void) const;
	int toInt(void) const;
};

std::ostream& operator<<(std::ostream& os, const Fixed& obj);
#endif