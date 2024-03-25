/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlivroze <tlivroze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 23:08:57 by tlivroze          #+#    #+#             */
/*   Updated: 2023/12/13 00:24:53 by tlivroze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
	ScavTrap *scav = new ScavTrap("ScavTrap");
	scav->Attack("target");
	scav->guardGate();
	scav->takeDamage(5);
	scav->beRepaired(5);
	delete scav;
	return (0);
}