#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap(), FragTrap(), ScavTrap()
{
	this->_Name = "default";
	ClapTrap::_Name = this->_Name + "_clap_Name";
	this->_HP = FragTrap::_HP;
	this->_EP = ScavTrap::_EP;
	this->_AD = FragTrap::_AD;
	std::cout << "DiamondTrap default constructor called" << std::endl;
}


DiamondTrap::DiamondTrap(std::string name) : ClapTrap(), FragTrap(), ScavTrap()
{
	this->_Name = name;
	ClapTrap::_Name = this->_Name + "_clap_Name";
	this->_HP = FragTrap::_HP;
	this->_EP = ScavTrap::_EP;
	this->_AD = FragTrap::_AD;
	std::cout << "DiamondTrap default constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const & src) : ClapTrap(src), FragTrap(src), ScavTrap(src) 
{
	std::cout << "DiamondTrap copy constructor called" << std::endl;
	*this = src;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap destructor called" << std::endl;
}

void DiamondTrap::attack(std::string const & target)
{
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI(void)
{
	std::cout << this->_Name << std::endl;
	std::cout << ClapTrap::_Name << std::endl;
}