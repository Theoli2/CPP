#include "Base.hpp"

Base * Base::generate(void)
{
	int i = rand();

	if (i % 3 == 0)
	{
		A *a = new A;
		return a;
	}
	else if (i % 3 == 1)
	{
		B *b = new B;
		return b;
	}
	C *c = new C;
	return c;
}

void Base::identify(Base* p)
{
	if (dynamic_cast<A*>(p) != NULL)
	{
		std::cout << "Base is of type A\n";
	}
	else if (dynamic_cast<B*>(p) != NULL)
	{
		std::cout << "Base is of type B\n";
	}
	else if (dynamic_cast<C*>(p) != NULL)
	{
		std::cout << "Base is of type C\n";
	}
}

Base::~Base()
{
	std::cout << "destructor called\n";
}

void Base::identify(Base& p)
{
	Base res;
	try
	{
		res = dynamic_cast<A&>(p);
		std::cout << "Base is of type A\n";
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
		try
		{
			res = dynamic_cast<B&>(p);
			std::cout << "Base is of type B\n";
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';	
			try
			{
				res = dynamic_cast<C&>(p);
				std::cout << "Base is of type C\n";		
			}
			catch(const std::exception& e)
			{
				std::cerr << e.what() << '\n';
			}
		}
	}
}