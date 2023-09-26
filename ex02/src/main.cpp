#include <iostream>
#include "Array.hpp"
#include "Array.tpp"
#include <Colors.hpp>
#include <cstdlib>

#define MAX_VAL 750

int main(int, char**)
{
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
	std::cout << "Default value of original Int Array: " << GREEN << mirror[0] << R << std::endl;
	std::cout << "Default value of my Int Array: " << GREEN << numbers[0] << R << std::endl;
    std::srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = std::rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    for (int i = 0; i < MAX_VAL; i++)
    {
		if (i % 50 == 0)
			std::cout << GREEN << "My Array: " << numbers[i] << " \tOriginal Array: " << mirror[i] << R << std::endl;
        if (mirror[i] != numbers[i])
        {
            std::cerr << RED << "didn't save the same value!!" << R << std::endl;
            return 1;
        }
    }
	std::cout << YELLOW << "\nCreating copy of numbers ..." << R << std::endl;
	Array<int> copy(numbers);
	std::cout << GREEN << "Value of numbers[42]: " << numbers[42] << " Value of copy[42]: " << copy[42] << R << std::endl;
	std::cout << YELLOW << "Changing value of numbers at pos 42 ..." << R << std::endl;
	numbers[42] /= 2;
	std::cout << GREEN << "Value of numbers[42]: " << numbers[42] << " Value of copy[42]: " << copy[42] << R << std::endl;
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    delete [] mirror;
    return 0;
}