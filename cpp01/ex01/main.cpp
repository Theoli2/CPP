#include "zombie.hpp"

int	main()
{
	Zombie* BONHOMMES = zombieHorde(5, "randy");
	for (int i = 0; i < 5; i++){
		BONHOMMES[i].announce();
	}
	delete[] (BONHOMMES);
	return(0);
}