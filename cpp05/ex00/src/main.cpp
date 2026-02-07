#include <iostream>
#include "Bureaucrat.hpp"

#define COL_RESET "\033[0m"
#define COL_GREEN "\033[32m"
#define COL_RED "\033[31m"
#define COL_YELLOW "\033[33m"

int main()
{
    std::cout << COL_YELLOW << "=== Testing Bureaucrat ===" << COL_RESET << std::endl;
    try
    {
        Bureaucrat bob("tarza", 150);
        std::cout << COL_GREEN << bob.getName() << " has grade " << bob.getGrade()
                  << COL_RESET << std::endl;
        Bureaucrat assignedBob;
        assignedBob = bob;
        std::cout << COL_GREEN << "Assigned Bob: " << assignedBob.getName()
                  << " has grade " << assignedBob.getGrade() << COL_RESET << std::endl;
        Bureaucrat copyBob(bob);
        std::cout << COL_GREEN << "Copy Bob: " << copyBob.getName()
                  << " has grade " << copyBob.getGrade() << COL_RESET << std::endl;
        Bureaucrat alice("Alice", 1);
        std::cout << COL_GREEN << alice.getName() << " has grade " << alice.getGrade()
                  << COL_RESET << std::endl;

        Bureaucrat invalidBob("InvalidBob", 0);
        Bureaucrat invalidBob2("InvalidBob2", 151);
    }
    catch (const std::exception &e)
    {
        std::cerr << COL_RED << "Exception: " << e.what() << COL_RESET << std::endl;
    }
}
