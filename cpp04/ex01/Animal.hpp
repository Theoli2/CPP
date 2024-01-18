/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlivroze <tlivroze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 20:24:49 by tlivroze          #+#    #+#             */
/*   Updated: 2024/01/13 22:43:06 by tlivroze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>
#include <cctype>
#include "Brain.hpp"

class Animal
{
	public:
		Animal();
		Animal(const Animal& obj);
		virtual ~Animal();
		Animal& operator=(const Animal& obj);
		std::string getType() const;
		void setType(const std::string _type);
		virtual void makeSound() const;
	protected:
		std::string _type;
		Brain *_brain;
};

#endif