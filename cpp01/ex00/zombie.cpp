#include "zombie.hpp"

void Zombie::announce()
{std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;}

Zombie::Zombie(std::string name) : name(name)
{this->announce();}

Zombie::~Zombie()
{std::cout << this->name << " has been destroyed" <<std::endl;}
