#include "HumanB.hpp"

HumanB::HumanB(std::string name) : name(name), weapon(NULL){}

HumanB::~HumanB() {}

void HumanB::setWeapon(Weapon &weapon) {
	this->weapon = &weapon;
}

void HumanB::attack( void ) {
    if (weapon) {
        std::cout << name << " attacks with his " << this->weapon->getType() << std::endl;
    } else {
        std::cout << name << " run for his life, he has no weapon" << std::endl;
    }
}
