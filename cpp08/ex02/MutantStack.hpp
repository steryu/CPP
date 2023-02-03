#ifndef __MUTANTSTACK_HPP__
#define __MUTANTSTACK_HPP__
#include <iostream>
#include <stack>

template <class T>
class MutantStack : public std::stack<T>{
public:
	MutantStack(){};
	virtual ~MutantStack(){};
	MutantStack(const MutantStack &other){
		*this = other;
	};
	MutantStack& operator=(const MutantStack &other){
		(void) other;
		return (*this);
	};
	// typename T::iterator begin(){};
	// typename T::iterator end(){};
};

#endif
