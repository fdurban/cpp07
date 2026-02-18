#include "iter.hpp"

template<typename T>
void	printName(T& x)
{
	std::cout<<x<<" ";
}

void	increment_value(int &num){ num++;}
void	increment_value(double &num){num++;}
int main()
{
	int numbers[] = {1,2,3,4,5};
	int array_length = 5;

	iter(numbers, array_length, printName<int>);
	iter(numbers, array_length, increment_value);
	std::cout<<std::endl;
	iter(numbers, array_length, printName<int>);
	std::cout<<std::endl;

	double decimals[] = {1.1, 2.2, 3.3};
	int array_length_double = 3;	
	iter(decimals, array_length_double, printName<double>);
	iter(decimals, array_length_double, increment_value);
	std::cout<<std::endl;
	iter(decimals, array_length_double, printName<double>);
	std::cout<<std::endl;
}
