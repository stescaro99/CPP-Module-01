#include "Harl.hpp"

Harl::Harl()
{
}

Harl::~Harl()
{
}

void Harl::complain(std::string level)
{
	struct 
	{
		std::string level;
		void (Harl::*func)(void);
	} complaints[] = 
	{
		{"DEBUG", &Harl::debug},
		{"INFO", &Harl::info},
		{"WARNING", &Harl::warning},
		{"ERROR", &Harl::error}
	};

	for (int i = 0; i < 4; i++)
	{
		if (level == complaints[i].level)
		{
			(this->*complaints[i].func)();
			return;
		}
	}
	std::cout << "Error: Invalid complaint level" << std::endl;
}