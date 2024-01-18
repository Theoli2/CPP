/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlivroze <tlivroze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 23:08:57 by tlivroze          #+#    #+#             */
/*   Updated: 2023/12/05 20:06:14 by tlivroze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	ScavTrap	Scav("Scav");
	FragTrap	Frag("Frag");

	std::cout << std::endl;
	Scav.Attack("Frag");
	Frag.takeDamage(20);
	std::cout << std::endl;
	Frag.Attack("Scav");
	Scav.takeDamage(30);
	std::cout << std::endl;
	Scav.guardGate();
	std::cout << std::endl;
	Frag.highFivesGuys();
	std::cout << std::endl;
	return (0);
}