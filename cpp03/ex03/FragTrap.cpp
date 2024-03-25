#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap()
{
	this->_Name = "default";
	this->_HP = 100;
	this->_EP = 100;
	this->_AD = 30;
	std::cout << "FragTrap default constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	this->_Name = "default";
	this->_HP = 100;
	this->_EP = 100;
	this->_AD = 30;
	std::cout << "FragTrap default constructor called" << std::endl;
}

FragTrap::FragTrap(FragTrap const & src) : ClapTrap(src)
{
	std::cout << "FragTrap copy constructor called" << std::endl;
	*this = src;
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap destructor called" << std::endl;
}

void FragTrap::attack(std::string const & target)
{
	std::cout << "FragTrap " << this->_Name << " attacks " << target << ", causing " << this->_AD << " points of damage!" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << this->_Name << " does a high five !" << std::endl;
}