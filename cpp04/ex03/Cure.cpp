/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlivroze <tlivroze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 23:33:24 by tlivroze          #+#    #+#             */
/*   Updated: 2024/01/10 16:56:06 by tlivroze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(void) : AMateria("cure")
{std::cout << "Cure created" << std::endl;}

Cure::Cure(Cure const &src) : AMateria(src)
{std::cout << "Cure created by copy" << std::endl;}

Cure::~Cure(void)
{std::cout << "Cure destroyed" << std::endl;}

Cure	&Cure::operator=(Cure const &rhs)
{
	if (this != &rhs)
	{this->_type = rhs._type;}
	return (*this);
}

AMateria*	Cure::clone(void) const
{return (new Cure(*this));}

void		Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
