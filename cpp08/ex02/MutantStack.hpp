#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

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
#include <stack>
#include <set>

template <typename T>
class MutantStack : public std::stack<T>
{
	public:
		typedef typename std::stack<T>::container_type::iterator iterator;
		typedef typename std::stack<T>::container_type::const_iterator const_iterator;

		iterator begin() { return std::stack<T>::c.begin(); }
		const_iterator begin() const { return std::stack<T>::c.begin(); }

		iterator end() { return std::stack<T>::c.end(); }
		const_iterator end() const { return std::stack<T>::c.end(); }

};

#endif