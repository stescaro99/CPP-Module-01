#include "SedIsForLosers.hpp"

void replace_string(std::string filename, std::string s1, std::string s2)
{
	std::ifstream file(filename.c_str());
	
	if (!file.is_open())
	{
		std::cout << "Error: File not found" << std::endl;
		exit(1);
	}

	std::ofstream new_file((filename + ".replace").c_str());

	if (!new_file.is_open())
	{
		std::cout << "Error: Can't create the file" << std::endl;
		exit(1);
	}

	std::string line;

	while (std::getline(file, line))
	{
		std::string new_line;
		size_t pos = 0;
		size_t start = 0;
		while ((pos = line.find(s1, start)) != std::string::npos)
		{
			new_line += line.substr(start, pos - start) + s2;
			start = pos + s1.length();
		}
		new_line += line.substr(start);
		new_file << new_line << std::endl;
	}
	file.close();
	new_file.close();

	std::cout << "File " << filename << " has been successfully replaced" << std::endl;
}