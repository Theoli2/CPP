#include "Data.hpp"

Data::Data()
{
	std::cout << "Data default constructor called\n";
	this->_name = "default";
}

Data::Data(std::string name) : _name(name)
{
	std::cout << "Data default constructor called\n";
}

Data::~Data()
{
	std::cout << "Data default destructor called\n";
}

std::string Data::getName()
{return(this->_name);}

void Data::setName(std::string str)
{
	this->_name = str;
}