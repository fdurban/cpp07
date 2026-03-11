#include "iter.hpp"

template<typename T>
void	printName(const T& x)
{
	std::cout<<x<<" ";
}

template<typename T>
void	increment_value(T &num){ num++;}
int main()
{
	int numbers[] = {1,2,3,4,5};
	std::size_t array_length = 5;

	iter(numbers, array_length, printName<int>);
	iter(numbers, array_length, increment_value<int>);
	std::cout<<std::endl;
	iter(numbers, array_length, printName<int>);
	std::cout<<std::endl;

	double decimals[] = {1.1, 2.2, 3.3};
	std::size_t array_length_double = 3;	
	iter(decimals, array_length_double, printName<double>);
	iter(decimals, array_length_double, increment_value<double>);
	std::cout<<std::endl;
	iter(decimals, array_length_double, printName<double>);
	std::cout<<std::endl;
}
