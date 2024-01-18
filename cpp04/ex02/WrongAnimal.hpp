/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlivroze <tlivroze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 01:58:19 by tlivroze          #+#    #+#             */
/*   Updated: 2024/01/13 22:43:11 by tlivroze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>
#include <cctype>

class WrongAnimal
{
	public:
		WrongAnimal();
		WrongAnimal(const WrongAnimal& obj);
		~WrongAnimal();
		WrongAnimal& operator=(const WrongAnimal& obj);
		std::string getType() const;
		void setType(const std::string _type);
		void makeSound() const;
	protected:
		std::string _type;
};

#endif