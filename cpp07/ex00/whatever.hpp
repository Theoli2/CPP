#ifndef WHATEVER_HPP
# define WHATEVER_HPP

#include <cmath>
#include <cstdlib>
#include <iomanip>
#include <iostream>
#include <limits>
#include <sstream>
#include <string>
#include <vector>
#include <cstdio>
#include <ctime>

template <typename T>
void swap(T & x, T & y)
{
	T temp;
	temp = x;
	x = y;
	y = temp;
}

template <typename T>
T min(T x, T y)
{
	return (x < y ? x : y);
}

template <typename T>
T max(T x, T y)
{
	return (x >= y ? x : y);
}

#endif