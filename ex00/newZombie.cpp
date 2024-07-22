#include "Zombie.hpp"

void Zombie::announce()
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie* Zombie::newZombie(std::string name)
{
	Zombie *newZombie = new Zombie();
	newZombie->name = name;
	return newZombie;
}