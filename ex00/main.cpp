#include <iostream>
#include <string>
#include "Templates.hpp"

int main( void ) {
	int a = 2;
	int b = 3;
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	float af = 3.4;
	float bf = 4.2;
	::swap(af, bf);
	std::cout << "a = " << af << ", b = " << bf << std::endl;
	std::cout << "min( af, bf ) = " << ::min( af, bf ) << std::endl;
	std::cout << "max( af, bf ) = " << ::max( af, bf ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	return 0;
}
