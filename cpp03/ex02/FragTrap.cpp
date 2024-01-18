/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlivroze <tlivroze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 19:27:24 by tlivroze          #+#    #+#             */
/*   Updated: 2023/12/05 20:05:22 by tlivroze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	std::cout << "FragTrap default constructor called" << std::endl ;
	this->_Name = "DefaultFragTrap";
	this->_HP = 100;
	this->_EP = 100;
	this->_AD = 30;
}

FragTrap::FragTrap(std::string Name) : ClapTrap()
{
	std::cout << "FragTrap default constructor called" << std::endl ;
	this->_Name = Name;
	this->_HP = 100;
	this->_EP = 100;
	this->_AD = 30;
}

FragTrap::FragTrap(const FragTrap& obj) : ClapTrap(obj)
{
	std::cout << "FragTrap copy constructor called" << std::endl ;
	*this = obj;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called" << std::endl;
}

void FragTrap::Attack(const std::string& target)
{
	if (_HP == 0 || _EP == 0)
		return ;
	std::cout << _Name <<" attacks : " << target <<" loses " << _AD << " HP." << std::endl;
	_EP -- ;
}

FragTrap &FragTrap::operator=(FragTrap const &obj)
{
	std::cout << "FragTrap assignation operator called" << std::endl;
	this->_Name = obj._Name;
	this->_HP = obj._HP;
	this->_EP = obj._EP;
	this->_AD = obj._AD;
	return (*this);
}

void FragTrap::highFivesGuys()
{
	std::cout << _Name << " does an high five !" << std::endl;
}