#ifndef __EASYFIND_HPP__
#define __EASYFIND_HPP__
#include <iostream>
#include <algorithm>
#include <iterator>
#include <array>

template <typename T>
typename T::iterator easyfind(T ar, int i){
	typename T::iterator tr;
	tr = std::find(ar.begin(), ar.end(), i);
		if ((*tr) != i)
			throw(std::out_of_range("occurence not found!"));
		else
			std::cout << i << " found! " << std::endl;
	return (0);
}

#endif
