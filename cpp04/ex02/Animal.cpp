/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlivroze <tlivroze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 20:24:45 by tlivroze          #+#    #+#             */
/*   Updated: 2024/01/13 22:43:09 by tlivroze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

AAnimal::AAnimal()
{
	std::cout << "AAnimal default constructor called" << std::endl;
}

AAnimal::AAnimal(const AAnimal& obj)
{
	std::cout << "AAnimal copy constructor called" << std::endl;
	*this = obj;
}

AAnimal &AAnimal::operator=(const AAnimal &obj)
{
	std::cout << "AAnimal assignation operator called" << std::endl;
	this->_type = obj._type;
	return (*this);
}

AAnimal::~AAnimal()
{
	std::cout << "AAnimal destructor called" << std::endl;
}

std::string AAnimal::getType() const
{return (this->_type);}

void AAnimal::setType(std::string _type)
{this->_type = _type;}

void AAnimal::makeSound() const
{
	std::cout << "AAnimal noise" << std::endl;
}