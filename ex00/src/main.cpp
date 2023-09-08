#include "whatever.hpp"
#include <iostream>
#include "Colors.hpp"

int main() {
	int a = 2;
	int b = 3;
	std::cout << GREEN << "a = " << a << ", b = " << b << R << std::endl;
	std::cout << MAGENTA << "swapping ..." << R << std::endl;
	::swap( a, b );
	std::cout << GREEN << "a = " << a << ", b = " << b << R << std::endl;
	std::cout << YELLOW << "min( a, b ) = " << ::min( a, b ) << R << std::endl;
	std::cout << YELLOW << "max( a, b ) = " << ::max( a, b ) << R << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	std::cout << GREEN << "c = " << c << ", d = " << d << R << std::endl;
	std::cout << MAGENTA << "swapping ..." << R << std::endl;
	::swap(c, d);
	std::cout << GREEN << "c = " << c << ", d = " << d << R << std::endl;
	std::cout << YELLOW << "min( c, d ) = " << ::min( c, d ) << R << std::endl;
	std::cout << YELLOW << "max( c, d ) = " << ::max( c, d ) << R << std::endl;
	return 0;
}