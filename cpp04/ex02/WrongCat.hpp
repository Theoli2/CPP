/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlivroze <tlivroze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 02:02:43 by tlivroze          #+#    #+#             */
/*   Updated: 2024/01/13 22:43:13 by tlivroze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal
{
	public :
		WrongCat();
		WrongCat(const WrongCat& obj);
		~WrongCat();
		WrongCat& operator=(const WrongCat& obj);
		std::string getType() const;
		void setType(const std::string _typeee);
		void makeSound() const;
};

#endif