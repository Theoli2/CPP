#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <string>
#include <iostream>
#include <cctype>
#include <iomanip>

class Zombie {
	private:
		std::string name;
		void announce( void );
	public:
		Zombie(std::string name);
		~Zombie();
};

Zombie* newZombie(std::string name);
void randomChump(std::string name );

#endif