#include "zombie.hpp"

int	main()
{
	Zombie* pointertozombie = newZombie("Bozo");
	randomChump("Random");
	delete (pointertozombie);
	return(0);
}