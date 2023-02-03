#ifndef __ARRAY_HPP__
#define __ARRAY_HPP__
#include <iostream>
#include <cstring>

template <class T>
class	Array{
private:
	unsigned int	Asize;
	T				*arr;
public:
	Array(){
		Asize = 0;
		arr = new T[0];
		std::cout << "Default Array constructor called" << std::endl;
	}
	Array(unsigned int n){
		Asize = n;
		arr = new T[Asize];
		for (unsigned int i = 0; i < Asize; i++){
			arr[i] = i;
		}
		std::cout << "Array made" << std::endl;
	}
	~Array(){
	if (arr)
			delete(arr);	
		std::cout << "Array destroyed" << std::endl;
	}
	Array(const Array &other){
		for (unsigned int i = 0; i < Asize; i++){
			(*this)->arr[i] = other.arr[i];
		}
		std::cout << "Array copied" << std::endl;
	}
	Array& operator=(const Array &other){
		for (unsigned int i = 0; i < Asize; i++){
			(*this).arr[i] = other.arr[i];
		}
		return(*this);
		std::cout << "Array copied using an assignment" << std::endl;
	}
	unsigned int size(){
		return (Asize);
	}
	T &operator[](unsigned int i){
		if (i >= Asize)
			throw(std::out_of_range("Index is out of bounds!"));
		return (arr[i]);
	}
};

#endif