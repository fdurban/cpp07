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
		std::cout<<sizedArray[i]<<" ";
	}
	std::cout<<std::endl;
	for(unsigned int i = 0; i < sizedArray.getSize(); i++)
	{
		sizedArray[i] = i * 10;
		std::cout<<sizedArray[i]<<" ";
	}
	std::cout<<std::endl;
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
	std::cout<<"\n";
	std::cout<<"------------Assignment operator-----"<<std::endl;
	Array<int> assigned;
	assigned = sizedArray;
	assigned[1] = 182;
	for(unsigned int i = 0; i < sizedArray.getSize(); i++)
	{
		std::cout<<sizedArray[i]<<" ";
	}
	std::cout<<"\n";
	for(unsigned int i = 0; i < assigned.getSize(); i++)
	{
		std::cout<<assigned[i]<<" ";
	}
	std::cout<<"\n";
	std::cout<<"-------Out of range access"<<std::endl;
	try
	{
		assigned[10] = 3432;
	}
	catch(std::exception &e)
	{
		std::cout<<"Exception caught: "<<e.what()<<std::endl;
	}
	std::cout<<"-------String test------"<<std::endl;
	Array<std::string> stringArray(3);
	stringArray[0] = "Hello";
	stringArray[1] = "World";
	stringArray[2] = "!";

	for(unsigned int i = 0; i < stringArray.getSize(); i++)
	{
		std::cout<<stringArray[i]<<" ";
	}
	return 0;
}
