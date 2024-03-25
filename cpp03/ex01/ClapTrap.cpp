/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlivroze <tlivroze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 23:09:16 by tlivroze          #+#    #+#             */
/*   Updated: 2023/12/13 00:28:05 by tlivroze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap():_Name("default"), _HP(10), _EP(10), _AD(0)
{
	std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& obj)
{
	std::cout << "ClapTrap copy constructor called" << std::endl;
	*this = obj;
}

ClapTrap::ClapTrap(std::string Name):_Name(Name), _HP(10), _EP(10), _AD(0)
{
	std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap destructor called" << std::endl;
}

ClapTrap &ClapTrap::operator=(ClapTrap const &obj)
{
	std::cout << "ClapTrap assignation operator called" << std::endl;
	this->_Name = obj._Name;
	this->_HP = obj._HP;
	this->_EP = obj._EP;
	this->_AD = obj._AD;
	return (*this);
}

void ClapTrap::attack(const std::string& target)
{
	if (_HP == 0 || _EP == 0)
		return ;
	std::cout << _Name <<" attacks :" << target <<" loses " << _AD << " HP." << std::endl;
	_EP -- ;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << _Name << " take " << amount << " damages" << std::endl;
	_HP = _HP - amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (_HP == 0 || _EP == 0)
		return ;
	std::cout << _Name << " heals itself. It gains " << amount << " HP." << std::endl;
	_HP += amount;
}
