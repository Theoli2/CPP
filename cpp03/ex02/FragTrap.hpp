/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlivroze <tlivroze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 19:27:27 by tlivroze          #+#    #+#             */
/*   Updated: 2023/12/05 20:04:57 by tlivroze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap 
{
	public :
		FragTrap();
		FragTrap(std::string Name);
		FragTrap(const FragTrap& obj);
		~FragTrap();
		FragTrap& operator=(FragTrap const &obj);
		void Attack(const std::string& target);
		void highFivesGuys();
};

#endif