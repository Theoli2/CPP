#include "iostream"
#include "cctype"

int	main(int ac, char **av)
{
	int	i;
	int j;

	i = 1;
	if (ac == 1)
		std::cout << " * LOUD AND UNBEARABLE NOISE * " << std::endl;
	else
	{
		while (i < ac)
		{
			std::string str;

			str = av[i];
			j = 0;
			while (str[j])
			{
				std::cout << (char)std::toupper(str[j]);
				j++;
			}
			i++;
		}
		std::cout << std::endl;
	}
	return (0);
}