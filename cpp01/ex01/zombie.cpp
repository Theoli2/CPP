#include "zombie.hpp"

void Zombie::announce(){
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
	return ;
}

void Zombie::setName(std::string name){
	this->name = name;
	return;
}

Zombie::Zombie(){
	this->announce();
	return;
}

Zombie::~Zombie(){
	std::cout << this->name << " has been destroyed" <<std::endl;
	return;
}

