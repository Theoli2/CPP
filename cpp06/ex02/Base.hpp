#ifndef BASE_HPP
# define BASE_HPP

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

class Base
{
	public:
		static Base * generate(void);
		static void identify(Base* p);
		static void identify(Base& p);
		virtual ~Base();
};

class A: public Base
{};

class B: public Base
{};

class C: public Base
{};

#endif