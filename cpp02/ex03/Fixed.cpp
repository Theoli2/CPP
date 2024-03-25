/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlivroze <tlivroze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 11:42:20 by tlivroze          #+#    #+#             */
/*   Updated: 2023/11/08 03:25:50 by tlivroze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) : _value(0)
{
	std::cout << "Default constructor called" << std::endl;
	return;
}

Fixed::Fixed(Fixed const &src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return;
}

Fixed::Fixed(int const value) : _value(value << this->_bits)
{
	std::cout << "Int constructor called" << std::endl;
	return;
}

Fixed::Fixed(float const value) : _value(roundf(value * (1 << this->_bits)))
{
	std::cout << "Float constructor called" << std::endl;
	return;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
	return;
}

int		Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return this->_value;
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->_value = raw;
}

float	Fixed::toFloat(void) const
{
	return (float)this->_value / (float)(1 << this->_bits);
}

int		Fixed::toInt(void) const
{
	return this->_value >> this->_bits;
}

Fixed	&Fixed::operator=(Fixed const &rhs)
{
	std::cout << "Assignation operator called" << std::endl;
	this->_value = rhs.getRawBits();
	return *this;
}

Fixed	&Fixed::operator+(Fixed const &rhs)
{
	this->_value += rhs.getRawBits();
	return *this;
}

Fixed	&Fixed::operator-(Fixed const &rhs)
{
	this->_value -= rhs.getRawBits();
	return *this;
}

Fixed	&Fixed::operator*(Fixed const &rhs)
{
	this->_value *= rhs.getRawBits() >> this->_bits;
	return *this;
}

Fixed	&Fixed::operator/(Fixed const &rhs)
{
	this->_value /= rhs.getRawBits();
	return *this;
}

bool	Fixed::operator>(Fixed const &rhs)
{
	return this->_value > rhs.getRawBits();
}

bool	Fixed::operator<(Fixed const &rhs)
{
	return this->_value < rhs.getRawBits();
}

bool	Fixed::operator>=(Fixed const &rhs)
{
	return this->_value >= rhs.getRawBits();
}

bool	Fixed::operator<=(Fixed const &rhs)
{
	return this->_value <= rhs.getRawBits();
}

bool	Fixed::operator==(Fixed const &rhs)
{
	return this->_value == rhs.getRawBits();
}

bool	Fixed::operator!=(Fixed const &rhs)
{
	return this->_value != rhs.getRawBits();
}

Fixed	&Fixed::operator++(void)
{
	this->_value++;
	return *this;
}

Fixed	&Fixed::operator--(void)
{
	this->_value--;
	return *this;
}

Fixed	Fixed::operator++(int)
{
	Fixed	tmp(*this);
	operator++();
	return tmp;
}

Fixed	Fixed::operator--(int)
{
	Fixed	tmp(*this);
	operator--();
	return tmp;
}

Fixed	&Fixed::min(Fixed &a, Fixed &b)
{
	return a < b ? a : b;
}

Fixed	&Fixed::max(Fixed &a, Fixed &b)
{
	return a > b ? a : b;
}

Fixed const	&Fixed::min(Fixed const &a, Fixed const &b)
{
	if (a.getRawBits() < b.getRawBits())
		return a;
	return b;
}

Fixed const	&Fixed::max(Fixed const &a, Fixed const &b)
{
	if (a.getRawBits() > b.getRawBits())
		return a;
	return b;
}

std::ostream	&operator<<(std::ostream &out, Fixed const &rhs)
{
	out << rhs.toFloat();
	return out;
}