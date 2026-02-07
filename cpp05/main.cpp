#include <iostream>
#include <exception>
#include <stdexcept>

class  CustomException : public std::exception { 
public:
	 const char* what() const throw() {
		return "Custom exception occurred!";
	}
};


static void throw_standard_exception() {
	throw CustomException();
}

static void throw_plain_type()
{
	throw 42; // plain type, no class
}

int main()
{
	std::cout << "=== Throw std::runtime_error ===" << std::endl;
	try
	{
		throw_standard_exception();
	}
	catch (const std::exception &e)
	{
		std::cout << "Caught std::exception: " << e.what() << std::endl;
	}

}
