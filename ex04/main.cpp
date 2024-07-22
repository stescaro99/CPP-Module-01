#include "SedIsForLosers.hpp"

int	main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "Wrong number of arguments" << std::endl;
		return (1);
	}
	
	replace_string(argv[1], argv[2], argv[3]);

	return (0);
}
