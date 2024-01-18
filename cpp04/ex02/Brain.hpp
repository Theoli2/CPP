/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlivroze <tlivroze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 02:13:48 by tlivroze          #+#    #+#             */
/*   Updated: 2023/12/13 02:18:34 by tlivroze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>
#include <cctype>

class Brain
{
	public:
		Brain();
		Brain(const Brain& obj);
		~Brain();
		Brain& operator=(const Brain& obj);
		std::string getIdea(int i) const;
		void setIdea(int i, const std::string idea);
	private:
		std::string ideas[100];
};


#endif