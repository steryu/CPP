#ifndef __MUTANTSTACK_HPP__
#define __MUTANTSTACK_HPP__
#include <iostream>

template <class T>
class MutantStack{
protected:
private:
public:
	MutantStack();
	virtual ~MutantStack();
	MutantStack(const MutantStack &other);
	MutantStack& operator=(const MutantStack &other);
};

#endif
