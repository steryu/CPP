#ifndef __ITER_HPP__
#define __ITER_HPP__
#include <iostream>

template <typename T>
int f(T t)
{
	t = 69;
	return (t);
}

template <typename T> 
void iter(T arr[], size_t len, int(*f)(T&))
{
	std::cout << "address of the array: " << &arr << std::endl;
	std::cout << "length of the array: " << len << std::endl;
	for (size_t i = 0; i < len; i++){
		arr[i] = f(arr[i]);
		std::cout << arr[i] << std::endl;
	}
}

#endif
