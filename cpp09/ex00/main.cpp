#include "BitcoinExchange.hpp"

int main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cerr << "Error: could not open file\n";
		return 1;
	}
	else
	{	
		try
		{
			Bitcoin btc = Bitcoin();
			btc.printRes(av[1]);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
            return 1;
		}
	}
}