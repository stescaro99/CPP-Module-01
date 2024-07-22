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
			switchComplain(i);
			return;
		}
	}
	std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
}

void Harl::switchComplain(int level)
{
	switch (level)
	{
		case 0:
		{
			std::cout << std::endl;
			info();
		}
		case 1:
		{
			std::cout << std::endl;
			warning();
		}	
		case 2:
		{
			std::cout << std::endl;
			error();
		}
		case 3:
			break;
	}
}
