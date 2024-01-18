/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlivroze <tlivroze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 23:08:57 by tlivroze          #+#    #+#             */
/*   Updated: 2023/12/05 19:22:42 by tlivroze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
	ScavTrap *scav = new ScavTrap("ScavTrap");
	scav->Attack("target");
	scav->guardGate();
	delete scav;
	return (0);
}