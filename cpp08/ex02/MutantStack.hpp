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

	typedef typename std::stack<T>::container_type::iterator iterator;

	iterator begin(){
		return (this->c.begin());
	};
	iterator end(){
		return (this->c.end());
	};
};

#endif
