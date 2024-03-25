#include "Base.hpp"



int main()
{
	srand(time(NULL));
	Base *base1 = Base::generate();
	std::cout << "Using a pointer:" << std::endl;
	Base::identify(base1);
	std::cout << "Using a reference:" << std::endl;
	Base::identify(*base1);
	if (base1 == NULL)
		return (EXIT_FAILURE);
	delete base1; 
	return (EXIT_SUCCESS);
}