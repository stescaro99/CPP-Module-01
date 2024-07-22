#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>
#include <fstream>
#include <string>

class Harl
{
	private:
		void debug(void)
		{
			std::cout << "[DEBUG]" << std::endl;
			std::cout << "I'd love to see some emperor penguins in Antarctica" << std::endl;
		}
		void info(void)
		{
			std::cout << "[INFO]" << std::endl;
			std::cout << "Emperor Penguins are amazing animals, but for some reason, Nature did't give 'em knees" << std::endl;
		}
		void warning(void)
		{
			std::cout << "[WARNING]" << std::endl;
			std::cout << "I think Nature should give 'em back their knees.\nHow can they run from predators without them?" << std::endl;
		}
		void error(void)
		{
			std::cout << "[ERROR]" << std::endl;
			std::cout << "This is unacceptable! Call the WWF and start a petition!" << std::endl;
		}

	public:
		Harl();
		~Harl();
		void complain(std::string level);
		void switchComplain(int level);
};

#endif
