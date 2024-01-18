/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlivroze <tlivroze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 19:38:11 by tlivroze          #+#    #+#             */
/*   Updated: 2023/12/04 23:04:09 by tlivroze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed():_value(0){
	std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::Fixed(const Fixed& obj){
	std::cout << "Copy constructor called" << std::endl;
	*this = obj;
	return ;
}

Fixed::Fixed(int const value):_value(value << this->_bits){
	std::cout << "Int constructor called" << std::endl;
	return ;
}

Fixed::Fixed(float const value):_value(roundf(value * (1 << this->_bits))){
	std::cout << "Float constructor called" << std::endl;
	return ;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;	
	return ;
}

int Fixed::getRawBits() const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_value);
}

void Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->_value = raw;
}

Fixed &Fixed::operator=(const Fixed& obj)
{
	std::cout << "Assignation operator called" << std::endl;
	this->_value = obj.getRawBits();
	return *this;
}

bool Fixed::operator>(const Fixed& obj)
{
	return this->_value > obj.getRawBits();
}

bool Fixed::operator<(const Fixed& obj)
{
	return this->_value < obj.getRawBits();
}

bool Fixed::operator>=(const Fixed& obj)
{
	return this->_value >= obj.getRawBits();
}

bool Fixed::operator<=(const Fixed& obj)
{
	return this->_value <= obj.getRawBits();
}

bool Fixed::operator==(const Fixed& obj)
{
	return this->_value == obj.getRawBits();	
}

bool Fixed::operator!=(const Fixed& obj)
{
	return this->_value != obj.getRawBits();
}

Fixed &Fixed::operator+(const Fixed& obj)
{
	this->_value += obj.getRawBits();
	return (*this); 
}

Fixed &Fixed::operator-(const Fixed& obj)
{
	this->_value -= obj.getRawBits();
	return (*this);
}

Fixed &Fixed::operator*(const Fixed& obj)
{
	this->_value *= obj.getRawBits() >> this->_bits;
	return (*this);
}

Fixed &Fixed::operator/(const Fixed& obj)
{
	this->_value /= obj.getRawBits();
	return (*this);
}

Fixed& Fixed::operator++()
{
	this->_value++;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed tmp(*this);
	operator++();
	return tmp;
}

Fixed& Fixed::operator--()
{
	this->_value--;
	return (*this);
}

Fixed Fixed::operator--(int)
{
	Fixed tmp(*this);
	operator--();
	return tmp;	
}

Fixed& Fixed::min(Fixed& x, Fixed& y)
{
	if (x < y)
		return (x);
	return (y);
}

Fixed const &Fixed::min(const Fixed& x, const Fixed& y)
{
	if (x.getRawBits() < y.getRawBits())
		return (x);
	return (y);
}

Fixed& Fixed::max(Fixed& x, Fixed& y)
{
	if (x > y)
		return (x);
	return (y);
}

Fixed const &Fixed::max(const Fixed& x, const Fixed& y)
{
	if (x.getRawBits() > y.getRawBits())
		return (x);
	return (y);
}

float Fixed::toFloat() const
{
	return((float)this->_value / (float)(1 << this->_bits));
}

int Fixed::toInt() const
{
	return (this->_value >> this->_bits);
}

std::ostream &operator<<(std::ostream& os, const Fixed& obj)
{
	os << obj.toFloat();
	return os;
}
