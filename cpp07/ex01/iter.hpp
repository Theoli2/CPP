#ifndef ITER_HPP
# define ITER_HPP

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

template <typename T, typename F>
void iter(T *arr, size_t len, F func)
{
	size_t i = 0;
	while (i < len)
	{
		func(arr[i]);
		i++;
	}
}

template<typename T>
void print(T res)
{
	std::cout << res << "\n";
}

template<typename T, size_t N>
size_t arraySize(T (&)[N]) {
    return (N);
}

#endif