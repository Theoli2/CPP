#include "Array.hpp"


int main( void ) 
{
	std::srand(std::time(NULL));
	Array<int> huh;
	std::cout << huh << std::endl;

	Array<int> nmbr(15);
	std::cout << nmbr << std::endl;
	for (int i = 0; i < 15; ++i)
		nmbr[i] = std::rand() % 10;
	std::cout << nmbr << std::endl;
	try {
		nmbr[-5] = 54;
	} catch (const std::exception& e) {
		std::cerr << e.what() << std::endl;
	}

	Array<std::string> s1(3);
	std::cout << s1 << std::endl;
	s1[1] = "PLINK";
	std::cout << s1 << std::endl;

	Array<std::string> s2 = s1;
	s2[0] = "Prankex";
	s2[2] = "It smells like home here";
	std::cout << s1 << std::endl;
	std::cout << s2 << std::endl;
	return 0;
}