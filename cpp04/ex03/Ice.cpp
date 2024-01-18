/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlivroze <tlivroze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 23:33:32 by tlivroze          #+#    #+#             */
/*   Updated: 2024/01/10 16:43:05 by tlivroze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void) : AMateria("ice")
{std::cout << "Ice created" << std::endl;}

Ice::Ice(Ice const &src) : AMateria(src)
{std::cout << "Ice created by copy" << std::endl;}

Ice::~Ice(void)
{std::cout << "Ice destroyed" << std::endl;}

Ice	&Ice::operator=(Ice const &rhs)
{
	if (this != &rhs)
	{this->_type = rhs._type;}
	return (*this);
}

AMateria*	Ice::clone(void) const
{return (new Ice(*this));}

void Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
	AMateria::use(target);
}