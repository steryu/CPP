#ifndef __MUTANTSTACK_HPP__
#define __MUTANTSTACK_HPP__
#include <iostream>
#include <stack>

template <class T>
class MutantStack : public std::stack<T>{
public:
	typedef T* iterator;
	MutantStack(){};
	virtual ~MutantStack(){};
	MutantStack(const MutantStack &other){
		*this = other;
	};
	MutantStack& operator=(const MutantStack &other){
		(void) other;
		return (*this);
	};
	iterator begin(){
		// int _top = &this->top();
		return (&this->top());
	};
	iterator end(){
		iterator _end;
		MutantStack _stack;
		for (long unsigned int i = 0; i <= MutantStack::size(); i++){
			_stack.push(MutantStack::top());
			MutantStack::pop();
		}
		_stack.push(MutantStack::top());
		MutantStack::pop();
		_end = &this->top();
		for (long unsigned int i = 0; i <= _stack.size(); i++){
			MutantStack::push(_stack.top());
			_stack.pop();
		}
		MutantStack::push(_stack.top());
		_stack.pop();
		return (_end);
	};
};

#endif
