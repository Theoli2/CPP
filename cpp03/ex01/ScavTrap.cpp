/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlivroze <tlivroze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 23:41:36 by tlivroze          #+#    #+#             */
/*   Updated: 2023/12/05 19:56:53 by tlivroze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	std::cout << "ScavTrap default constructor called" << std::endl ;
	this->_Name = "DefaultScavTrap";
	this->_HP = 100;
	this->_EP = 50;
	this->_AD = 20;
}

ScavTrap::ScavTrap(std::string Name) : ClapTrap(Name)
{
	std::cout << "ScavTrap default constructor called" << std::endl ;
	this->_Name = Name;
	this->_HP = 100;
	this->_EP = 50;
	this->_AD = 20;
}

ScavTrap::ScavTrap(const ScavTrap& obj) : ClapTrap(obj)
{
	std::cout << "ScavTrap copy constructor called" << std::endl ;
	*this = obj;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called" << std::endl;
}

void ScavTrap::Attack(const std::string& target)
{
	if (_HP == 0 || _EP == 0)
		return ;
	std::cout << _Name <<" attacks : " << target <<" loses " << _AD << " HP." << std::endl;
	_EP -- ;
}

void ScavTrap::guardGate()
{
	std::cout << _Name << " goes into gate keeper mode." << std::endl;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &obj)
{
	std::cout << "ScavTrap assignation operator called" << std::endl;
	this->_Name = obj._Name;
	this->_HP = obj._HP;
	this->_EP = obj._EP;
	this->_AD = obj._AD;
	return (*this);
}
