#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

#include <cmath>
#include <cstdlib>
#include <iomanip>
#include <iostream>
#include <limits>
#include <sstream>
#include <string>
#include <vector>
#include "Data.hpp"

typedef unsigned long uintptr_t;

class Serializer
{
	private:
		Serializer() ;
	public:
		static uintptr_t serialize(Data* ptr);
		static Data* deserialize(uintptr_t raw);
};

#endif