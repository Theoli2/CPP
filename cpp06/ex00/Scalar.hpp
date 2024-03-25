#ifndef SCALAR_HPP
# define SCALAR_HPP

#include <cmath>
#include <cstdlib>
#include <iomanip>
#include <iostream>
#include <limits>
#include <sstream>
#include <string>
#include <vector>

#define NO "❌❌❌\n"
#define RESET "\033[0m"
#define BOLDBLUE "\033[1m\033[34m"
#define GREEN "\033[32m"

class ScalarConverter
{
	public:
		static void convert(std::string str);
	private:
		ScalarConverter();
};

#endif