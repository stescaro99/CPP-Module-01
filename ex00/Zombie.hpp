#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie
{
private:
	std::string name;
	
public:
	Zombie();
	~Zombie();
	void announce();
	static Zombie *newZombie(std::string name);
	static void randomChump(std::string name);
};

#endif