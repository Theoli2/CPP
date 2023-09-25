#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <string>
#include <iostream>
#include <cctype>
#include <iomanip>

class Weapon {
	private:
		std::string type;
	public:
		Weapon(std::string type);
		~Weapon();
		const std::string& getType() const;
		void setType(const std::string &type);
};

#endif