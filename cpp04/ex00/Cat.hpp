/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlivroze <tlivroze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 20:24:52 by tlivroze          #+#    #+#             */
/*   Updated: 2024/01/13 22:43:03 by tlivroze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat: public Animal
{
	public :
		Cat();
		Cat(const Cat& obj);
		virtual ~Cat();
		Cat& operator=(const Cat& obj);
		std::string getType() const;
		void setType(const std::string _type);
		virtual void makeSound() const;
};

#endif