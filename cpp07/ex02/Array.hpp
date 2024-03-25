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


template <typename T = int>
class Array
{
	public:
		Array() : _elems(0), _size(0){}

		Array(unsigned int n)
		{
			try
			{
				_elems = new T[n];
			}
			catch(const std::exception& e)
			{
				std::cerr << "bad_alloc caught: " << e.what() << '\n';
				_size = 0;
				return ;
			}
			_size = n;
			for (unsigned int i = 0; i < _size; ++i)
				_elems[i] = T();
		}

		Array(Array const &src)
		{
			try
			{
				_elems = new T[src.getSize()];
			}
			catch(const std::exception& e)
			{
				std::cerr << "bad_alloc caught: " << e.what() << '\n';
				_size = 0;
				return ;
			}
			_size = src.getSize();
			for (unsigned int i = 0; i < _size; ++i)
			{
				_elems[i] = src._elems[i];
			}
		}

		Array &operator=(Array const &rhs)
		{
			if (this != &rhs)
			{
				delete[] _elems;
				try
				{
					_elems = new T[rhs.getSize()];
				}
				catch(const std::exception& e)
				{
					std::cerr << "bad_alloc caught: " << e.what() << '\n';
					_size = 0;
					return ;
				}
				_size = rhs.getSize();
				for (unsigned int i = 0; i < _size; ++i)
				{
					_elems[i] = rhs._elems[i];
				}
			}
			return *this;
		}

		~Array()
		{
			delete[] _elems;
		}

		T& operator[](unsigned int i)
		{
			if (i >= this->getSize())
				throw std::out_of_range("Index out of range");
			return _elems[i];
		}

		const T& operator[](unsigned int i) const
		{
			if (i >= this->getSize())
				throw std::out_of_range("Index out of range");
			return _elems[i];
		}

		unsigned int getSize() const
		{
			return _size;
		}

	private:
		T* _elems;
		unsigned int _size;

};

template <class T>
std::ostream &operator<<(std::ostream& os, const Array<T>& arr)
{
	os << '{';
	for (unsigned int i = 0; i < arr.getSize(); ++i)
	{
		if (i != 0)
			os << ", ";
		os << arr[i];
	}
	os << '}';
	return os;
}

template<typename T, size_t N>
size_t arraySize(T (&)[N]) {
    return N;
}

#endif