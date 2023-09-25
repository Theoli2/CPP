#include "zombie.hpp"

void Zombie::announce(){
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
	return ;
}

Zombie::Zombie(std::string name) : name(name){
	this->announce();
	return;
}

Zombie::~Zombie(){
	std::cout << this->name << " has been destroyed" <<std::endl;
	return;
}
