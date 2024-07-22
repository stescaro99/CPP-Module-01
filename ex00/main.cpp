#include "Zombie.hpp"

int main()
{
	Zombie *zombie = Zombie::newZombie("1st Zombie");
	zombie->announce();
	Zombie::randomChump("2nd Zombie");
	delete zombie;
	return 0;
}