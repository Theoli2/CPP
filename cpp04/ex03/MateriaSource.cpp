/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlivroze <tlivroze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 23:56:24 by tlivroze          #+#    #+#             */
/*   Updated: 2024/01/13 22:43:16 by tlivroze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void)
{
	std::cout << "MateriaSource created" << std::endl;
	for (int i = 0; i < 4; i++)
		this->_materia[i] = NULL;
}

MateriaSource::MateriaSource(MateriaSource const &src)
{
	std::cout << "MateriaSource created by copy" << std::endl;
	for (int i = 0; i < 4; i++)
		this->_materia[i] = src._materia[i];
}

MateriaSource::~MateriaSource(void)
{
	std::cout << "MateriaSource destroyed" << std::endl;
	for (int i = 0; i < 4; i++)
		delete this->_materia[i];
}

MateriaSource	&MateriaSource::operator=(MateriaSource const &rhs)
{
	if (this != &rhs)
	{
		for (int i = 0; i < 4; i++)
			this->_materia[i] = rhs._materia[i];
	}
	return (*this);
}

void			MateriaSource::learnMateria(AMateria *materia)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_materia[i] == NULL)
		{
			this->_materia[i] = materia;
			break ;
		}
	}
}

AMateria*			MateriaSource::createMateria(std::string const &_type)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_materia[i] != NULL && this->_materia[i]->getType() == _type)
			return (this->_materia[i]->clone());
	}
	return (NULL);
}