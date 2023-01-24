#ifndef __ARRAY_HPP__
#define __ARRAY_HPP__
#include <iostream>

template <class T>
class	Array{
private:
	T	arr[];
	T	size;
public:
	Array(){
		arr[4];
		std::cout << "Default Array constructor called" << std::endl;
	}
	Array(unsigned int n){
		arr[n];
		std::cout << "Array made" << std::endl;
	}
	~Array(){
		std::cout << "\nArray destroyed" << std::endl;
	}
	Array(const Array &other){
		*this = other;
		std::cout << "Array copied" << std::endl;
	}
	Array& operator=(const Array &other){
		arr = other.arr;
		return(*this);
		std::cout << "Array copied using an assignment" << std::endl;
	}
	class outOfBounds : public std::exception{
		const char* what() const throw();
	};
	int	size(){
		return (0);
	}
};

#endif