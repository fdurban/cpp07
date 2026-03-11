#include <iostream>

template<typename T>

class Array{

	private:
		T* elements;
		unsigned int size;
	public:
		Array();
		Array(unsigned int n);
		Array(const Array& src);
		Array& operator=(const Array& src);
		const T& operator[](unsigned int i) const;
		T& operator[](unsigned int i) ;
		unsigned int getSize() const;
		~Array();
		class	Exception: public std::exception
		{
			public:
				virtual const char* what() const throw() 
				{
					return ("Out of range");
				}
		};

};

template<typename T> Array<T>::Array(): elements(0), size(0)
{}

template<typename T> Array<T>::Array(unsigned int num): size(num)
{
	this->elements = new T[num];
}

template<typename T> Array<T>::Array(const Array& src): size(src.size)
{
	this->elements = new T(size);
	for(unsigned int i = 0; i < size; i++)
	{
		this->elements[i] = src.elements[i];
	}
}

template<typename T>
Array<T>&	Array<T>::operator=(const Array<T>& src)
{
	if (this != &src)
	{
		delete[] elements;
		size = src.size;
		this->elements = new T(size);
		for(unsigned int i = 0; i < size; i++)
		{
			this->elements[i] = src.elements[i];
		}
	}
	return (*this);
}

template<typename T>
Array<T>::~Array()
{
	delete[] elements;
}

template<typename T>
T&	Array<T>::operator[](unsigned int i)
{
	if (i >= this->size)
		throw Array::Exception();
	return (this->elements[i]);
}
template<typename T>
const T&	Array<T>::operator[](unsigned int i) const
{
	if (i >= this->size)
		throw Array::Exception();
	return this->elements[i];
}

template<typename T>
unsigned int	Array<T>::getSize() const
{
	return (this->size);
}
