#ifndef __ITER_HPP__
#define __ITER_HPP__
#include <iostream>

template <typename T>
void f(T t)
{
	std::cout << t << "\n";
}

template <typename T> 
void iter(T arr[], size_t len, void(*f)(const T&))
{
	for (size_t i = 0; i < len; i++){
		f(arr[i]);
	}
}

#endif
