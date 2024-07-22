#include "Zombie.hpp"

void Zombie::randomChump(std::string name)
{
	Zombie *nz = newZombie(name);
	nz->announce();
	delete nz;
}
