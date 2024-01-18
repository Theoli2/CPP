/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlivroze <tlivroze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 16:32:23 by tlivroze          #+#    #+#             */
/*   Updated: 2024/01/13 22:43:13 by tlivroze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(void)
{std::cout << "AMateria created" << std::endl;}

AMateria::AMateria(std::string const & _type) : _type(_type)
{std::cout << "AMateria created" << std::endl;}

AMateria::AMateria(AMateria const &src)
{
	std::cout << "AMateria created by copy" << std::endl;
	*this = src;
}

AMateria::~AMateria(void)
{std::cout << "AMateria destroyed" << std::endl;}

AMateria	&AMateria::operator=(AMateria const &rhs)
{
	if (this != &rhs)
	{this->_type = rhs._type;}
	return (*this);
}

std::string const	&AMateria::getType(void) const
{return (this->_type);}

void	AMateria::use(ICharacter &target)
{
	(void)target;
	std::cout << "AMateria used" << std::endl;
}