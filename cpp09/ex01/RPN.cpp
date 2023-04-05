#include "RPN.hpp"

RPN::RPN(){
	std::cout << "Default RPN constructor called" << std::endl;
}

RPN::~RPN(){
	std::cout << "RPN destroyed" << std::endl;
}

RPN::RPN(const RPN &other){
	*this = other;
	std::cout << "RPN copied" << std::endl;
}

RPN& RPN::operator=(const RPN &other){
	stack = other.stack;
	return(*this);
	std::cout << "RPN copied using an assignment" << std::endl;
}

int	RPN::isToken(char c){
	if (c == '+')
		return ('+');
	if (c == '-')
		return ('-');
	if (c == '/')
		return ('/');
	if (c == '*')
		return ('*');
	return (0);
}

int	RPN::operation(char token){
	int res;
	if (stack.empty()){
		std::cout << "Error" << std::endl;
		return(1);
	}
	int a = stack.top();
	stack.pop();
	if (stack.empty()){
		std::cout << "Error" << std::endl;
		return(1);
	}
	int b = stack.top();
	stack.pop();
	if (isToken(token) == '+')
		res = b + a;
	if (isToken(token) == '-')
		res = b - a;
	if (isToken(token) == '/')
		res = b / a;
	if (isToken(token) == '*')
		res = b * a;
	stack.push(res);
	return (0);
}

void	RPN::readInput(std::string input){
	int i = 0;
	// checkInput(input);
	while (i < input[i]){
		if (!(isdigit(input[i])) && (!isToken(input[i])) && input[i] != ' '){
			std::cout << "Error" << std::endl;
			return ;
		}
		if ((i != 0 && (long unsigned int)i != (input.length() - 1)) && (isdigit(input[i]) || isToken(input[i]))){
			if ((isdigit(input[i]) || isToken(input[i])) && (input[i - 1] != ' ' || input[i + 1] != ' ')){
				std::cout << "Error" << std::endl;
				return ;
			}
		}
		if (isdigit(input[i]))
			stack.push(input[i] - 48);
		if (isToken(input[i]))
			if (operation(input[i]) == 1)
				return ;
		i++;
	}
	std::cout << stack.top() << std::endl;
}
