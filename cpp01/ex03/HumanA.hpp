#ifndef HUMANA_HPP
# define HUMANA_HPP

#include <string>
#include <iostream>
#include <cctype>
#include <iomanip>
#include "Weapon.hpp"

class HumanA {
	private:
		std::string name;
		Weapon& weapon;
	public:
		HumanA(std::string name, Weapon& weapon);
		~HumanA();
		void attack( void );
};

#endif