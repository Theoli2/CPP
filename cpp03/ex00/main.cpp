/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlivroze <tlivroze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 23:08:57 by tlivroze          #+#    #+#             */
/*   Updated: 2023/12/13 01:57:03 by tlivroze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	clapTrap("ClapTrap");
	ClapTrap	clapTrap2("ClapTrap2");

	clapTrap.attack("target");
	clapTrap.takeDamage(5);
	clapTrap.beRepaired(5);
	clapTrap2.attack("target");
	clapTrap2.takeDamage(5);
	clapTrap2.beRepaired(5);
	return (0);
}