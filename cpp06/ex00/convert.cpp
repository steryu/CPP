#include "convert.hpp"

convert::convert() 
	: type(-1), c(0), i(0), f(0.0), d(0){
	std::cout << "Default convert constructor called" << std::endl;
}

convert::~convert(){
	std::cout << "convert destroyed" << std::endl;
}

convert::convert(const convert &other){
	*this = other;
	std::cout << "convert copied" << std::endl;
}

convert& convert::operator=(const convert &other){
	type = other.type;
	c = other.c;
	i = other.i;
	f = other.f;
	d = other.d;
	return(*this);
	std::cout << "convert copied using an assignment" << std::endl;
}

void	convert::setC(char newC){
	c = newC;
}

void	convert::setI(int newI){
	i = newI;
}

void	convert::checkC(std::string input){
	if (input.length() == 1 && isalpha(input[0])){
		setC(input[0]);
		type = 1;
	}
}

void	convert::checkI(std::string input){
	long int i = std::stol(input);
	setI(i);
}

void	convert::conversion(std::string input){
	checkC(input);
	checkI(input);
	displayResults();
}

void convert::displayResults(){
	std::cout << "char: " << c << std::endl;
	std::cout << "int: " << i << std::endl;
	std::cout << "float: " << f << std::endl;
	std::cout << "char: " << d << std::endl;
}
