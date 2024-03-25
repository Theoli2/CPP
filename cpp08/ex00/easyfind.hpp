#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <cmath>
#include <cstdlib>
#include <iomanip>
#include <iostream>
#include <limits>
#include <sstream>
#include <string>
#include <cstdio>
#include <ctime>
#include <vector>
#include <deque>
#include <list>
#include <algorithm>

template <typename T>
int easyfind(T container, int val)
{
    typename T::iterator it = std::find(container.begin(), container.end(), val);
	if (it == container.end())
	{
	    throw std::runtime_error("Value not found in container");
	}
	else
	{
		return std::distance(container.begin(), it);
	}
}



#endif