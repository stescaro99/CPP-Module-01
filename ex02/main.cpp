#include <iostream>
#include <string>

int main()
{
	std::string string = "HI THIS IS BRAIN";
	std::string *stringPTR = &string;
	std::string &stringREF = string;

	std::cout << "string address: " << &string << std::endl;
	std::cout << "stringPTR address: " << stringPTR << std::endl;
	std::cout << "stringREF address: " << &stringREF << std::endl;
	std::cout << "string value: " << string << std::endl;
	std::cout << "Value pointed to stringPTR: " << *stringPTR << std::endl;
	std::cout << "Value pointed to stringREF: " << stringREF << std::endl;
	return 0;
}