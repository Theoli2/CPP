#include <string>
#include <fstream>
#include <iostream>
#include <cctype>
#include <iomanip>

int replace(std::ifstream &input, std::ofstream &output, std::string search, std::string replace)
{
	std::string line;
	while (std::getline(input, line))
	{
		output << ((line == search) ? replace : line) << std::endl;
	}
	input.close();
	output.close();
	return 0;
}

int main(int ac, char **av){
	if (ac != 4)
	{
		std::cout << "Wrong number of arguments" << std::endl;
		return 1;
	}
	std::string filename = av[1];
	std::ifstream input(filename);
	if (!input.is_open())
	{
		std::cout << "File not found" << std::endl;
		return 1;
	}
	std::ofstream output(filename + ".replace");
	if (!output.is_open())
	{
		std::cout << "File not found" << std::endl;
		input.close();
		return 1;
	}
	std::string s1 = av[2];
	std::string s2 = av[3];
	replace(input, output, s1, s2);
	return 0;
}