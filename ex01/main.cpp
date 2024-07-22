#include "Zombie.hpp"

int main()
{
	int N = 5;
	Zombie *horde = Zombie::zombieHorde(N, "Zombie Horde");
	horde->announce();
	delete[] horde;
	return 0;
}