#include <string>
#include <fstream>
#include <iostream>
#include <cctype>
#include <iomanip>

int replace(std::ifstream &input, std::ofstream &output, std::string search, std::string replace)
{
	std::string file;
	std::string tmp;
	while (std::getline(input, tmp))
	{
		file += tmp;
		file += "\n";
	}
    size_t pos = file.find(search);
	if (search == replace)
	{
		std::cerr << "searched and replacement strings can't be the same" << std::endl;
		return (1);
	}
	while (pos != std::string::npos)
    {
        file.replace(pos, search.length(), replace);
		pos = file.find(search);
	}
    output << file << std::endl;
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
	std::ifstream input(filename.c_str());
	if (!input.is_open())
	{
		std::cout << "File not found" << std::endl;
		return 1;
	}
	filename += ".replace";
	std::ofstream output(filename.c_str());
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