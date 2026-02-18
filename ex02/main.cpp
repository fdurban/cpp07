#include "Array.hpp"

int main()
{
	std::cout<<"Default constructor"<<std::endl;
	Array<int> emptyArray;
	std::cout<<emptyArray.size()<<std::endl;

	std::cout<<"Constructor with size"<<std::endl;
	unsigned int num = 5;
	Array<int> sizedArray(num);
	std::cout<<"sizedArray size:"<<sizedArray.size()<<std::endl;
	for(unsigned int i = 0; i < sizedArray.size(); i++)
	{
		std::cout<<
	}
	
}
