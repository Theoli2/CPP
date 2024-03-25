#include "Span.hpp"

Span::Span() : _n(0)
{
}

Span::Span(unsigned int n): _n(n)
{}

Span::Span(const Span &other) : _n(other._n), _set(other._set)
{}

Span& Span::operator=(const Span &other)
{
    if (this != &other)
    {
        _n = other._n;
        _set = other._set;
    }
    return *this;
}

Span::~Span()
{}

std::set<int> Span::getSet()
{
	return (this->_set);
}

unsigned int Span::getN()
{
	return (this->_n);
}

void Span::addNumber(int n)
{
	if (std::distance(_set.begin(), _set.end()) >= this->_n)
	{
		throw std::runtime_error("Set already full");
	}
	else
	{
		_set.insert(n);
	}
}

int Span::shortestSpan()
{
	if (_set.size() <= 1)
	{
		throw std::runtime_error("No span can be found: No numbers or only one in the set.");
	}
	std::set<int>::iterator i = _set.begin();
	std::set<int>::iterator j = _set.begin();
	++j;
	std::set<int>::iterator ite = _set.end();
	int res = *j - *i;
	while (j != ite)
	{
		if (res >  *j - *i)
			res = *j - *i;
		i++;
		j++;		
	}
	return res;
}

int Span::longestSpan()
{
	if (_set.size() <= 1)
	{
		throw std::runtime_error("No span can be found: No numbers or only one in the set.\n");
	}
	std::set<int>::iterator i = _set.begin();
	std::set<int>::iterator ite = _set.end();
	ite--;
	int res = *ite - *i;
	return res;
}

