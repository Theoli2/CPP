#ifndef HUMANB_HPP
# define HUMANB_HPP

#include <string>
#include <iostream>
#include <cctype>
#include <iomanip>
#include "Weapon.hpp"

class HumanB {
	private:
		std::string name;
		Weapon* weapon;
	public:
		HumanB(std::string name);
		~HumanB();
		void setWeapon(Weapon &weapon);
		void attack( void );
};

#endif