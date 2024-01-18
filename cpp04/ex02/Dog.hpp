/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlivroze <tlivroze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 20:24:43 by tlivroze          #+#    #+#             */
/*   Updated: 2024/01/13 22:43:10 by tlivroze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog: public AAnimal
{
	public :
		Dog();
		Dog(const Dog& obj);
		virtual ~Dog();
		Dog& operator=(const Dog &obj);
		std::string getType() const;
		void setType(const std::string _type);
		virtual void makeSound() const;
};

#endif