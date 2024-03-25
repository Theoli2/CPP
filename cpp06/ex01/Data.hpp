#ifndef DATA_HPP
# define DATA_HPP

#include <cmath>
#include <cstdlib>
#include <iomanip>
#include <iostream>
#include <limits>
#include <sstream>
#include <string>
#include <vector>

class Data
{
	private:
		std::string _name;
	public:
		Data();
		Data(std::string name);
		~Data();
		std::string getName();
		void setName(std::string name);
};
#endif