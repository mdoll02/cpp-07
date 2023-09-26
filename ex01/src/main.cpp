#include <iostream>
#include "Colors.hpp"
#include "iter.hpp"
#include <string>

void str_capitalize(std::string &str) {
	for (unsigned int i = 0; i < str.length(); i++) {
		str[i] = static_cast<char>(toupper(str[i]));
	}
}

void int_sqr(int &n) {
	n = n * n;
}

int main () {
	std::string str[] = {"Hello", "World", "This", "Is", "A", "Test"};
	int len = sizeof(str) / sizeof(str[0]);
	std::cout << GREEN << "string array: ";
	for (int i = 0; i < len; i++){
		std::cout << str[i] << " ";
	}
	std::cout << R << MAGENTA << std::endl << "len: " << len << R << std::endl;
	iter(str, len, str_capitalize);
	std::cout << YELLOW << "string array after iter: ";
	for (int i = 0; i < len; i++){
		std::cout << str[i] << " ";
	}
	std::cout << R << std::endl;


	std::string str_short[] = {"Hello", "World", "This", "Is", "A", "Test"};
	int len_short = sizeof(str_short) / sizeof(str_short[0]) - 3;
	std::cout << GREEN << "string array: ";
	for (int i = 0; i < len; i++){
		std::cout << str_short[i] << " ";
	}
	std::cout << R << MAGENTA << std::endl << "len_short: " << len_short << R << std::endl;
	iter(str_short, len_short, str_capitalize);
	std::cout << YELLOW << "string array after iter: ";
	for (int i = 0; i < len; i++){
		std::cout << str_short[i] << " ";
	}

	std::cout << R << std::endl;

	int n[] = {1, 2, 3, 4, 5, 6};
	len = sizeof(n) / sizeof(n[0]);
	std::cout << GREEN << "int array: ";
	for (int i = 0; i < len; i++){
		std::cout << n[i] << " ";
	}
	std::cout << R << MAGENTA << std::endl << "len: " << len << R << std::endl;
	iter(n, len, int_sqr);
	iter(n, len, int_sqr);
	iter(n, len, int_sqr);
	std::cout << YELLOW << "int array after 3 iter: ";
	for (int i = 0; i < len; i++){
		std::cout << n[i] << " ";
	}
	std::cout << R << std::endl;
	return 0;
}