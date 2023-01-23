#ifndef __ITER_HPP__
#define __ITER_HPP__
#include <iostream>

template <typename T>
void f(T t)
{
	std::cout << t << std::endl;
}

template <typename T> 
void iter(T arr[], T len, T f)
{
	std::cout << "address of the array: " << arr << std::endl;
	std::cout << "length of the array: " << len << std::endl;
	for (int i = 0; i < len; i++){
		f(arr[i]);
	}
}

#endif
