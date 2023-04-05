#ifndef __RPN_HPP__
#define __RPN_HPP__
#include <iostream>
#include <string>
#include <stack>

class RPN{
protected:
private:
	std::stack<int> stack;
public:
	RPN();
	virtual ~RPN();
	RPN(const RPN &other);
	RPN& operator=(const RPN &other);
	void	readInput(std::string input);
	int		isToken(char c);
	int	operation(char token);
};

#endif
