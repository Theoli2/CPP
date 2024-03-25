#ifndef SPAN_HPP
# define SPAN_HPP

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
#include <set>

class Span
{
	public:
		Span();
		Span(unsigned int n);
        Span(const Span &other);
        Span &operator=(const Span &other);		
		~Span();

		std::set<int> getSet();
		unsigned int getN();
		void addNumber(int n);
		template <typename T>
		void addset(T container);
		int shortestSpan();
		int longestSpan();
		private:
		std::set<int> _set;
		unsigned int _n;
};

template <typename T>
void Span::addset(T container)
{
    for (typename T::iterator it = container.begin(); it != container.end(); ++it) {
        if (this->_set.size() >= this->_n)
		{
			throw std::runtime_error("Set already full");
        }

        this->_set.insert(*it);
    }	
}

#endif