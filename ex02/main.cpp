#include "Array.hpp"

int main()
{
	std::cout<<"Default constructor"<<std::endl;
	Array<int> emptyArray;
	std::cout<<emptyArray.getSize()<<std::endl;

	std::cout<<"Constructor with size"<<std::endl;
	unsigned int num = 5;
	Array<int> sizedArray(num);
	std::cout<<"sizedArray size:"<<sizedArray.getSize()<<std::endl;
	for(unsigned int i = 0; i < sizedArray.getSize(); i++)
	{
		std::cout<<sizedArray[i]<<std::endl;
	}

	for(unsigned int i = 0; i < sizedArray.getSize(); i++)
	{
		sizedArray[i] = i * 10;
		std::cout<<sizedArray[i]<<std::endl;
	}

	std::cout<<"------------------------"<<std::endl;
	std::cout<<"Copy constructor"<<std::endl;
	Array<int> copyArray(sizedArray);
	copyArray[1] = 1922;
	
	std::cout<<"-------------Original Array-----------"<<std::endl;
	for(unsigned int i = 0; i < sizedArray.getSize(); i++)
	{
		std::cout<<sizedArray[i]<<" ";
	}
	std::cout<<"\n";
	std::cout<<"-------------Copy Array-----------"<<std::endl;
	for(unsigned int i = 0; i < copyArray.getSize(); i++)
	{
		std::cout<<copyArray[i]<<" ";
	}
}
