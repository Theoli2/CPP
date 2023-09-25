#include "zombie.hpp"

int	main()
{
	Zombie* pointertozombie = newZombie("Bozo");
	randomChump("2pac");
	delete (pointertozombie);
	return(0);
}