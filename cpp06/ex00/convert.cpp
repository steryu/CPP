#include "convert.hpp"

convert::convert() 
	: type(-1), c(0), i(0), f(0.0), d(0){
	zero = false;
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
	zero = false;
	return(*this);
	std::cout << "convert copied using an assignment" << std::endl;
}

void	convert::setC(char newC){
	c = newC;
}

void	convert::setI(int newI){
	i = newI;
}

void	convert::setF(float newF){
	f = newF;
}

void	convert::setD(double newD){
	d = newD;
}

int	convert::checkC(std::string input){
	if (!isdigit(input[0])){
		if (isalpha(input[0]) && input.length() == 1){
				setC(input[0]);
				type = 1;
				zero = true;
		}
		else
			return (EXIT_FAILURE);
	}
	return (0);
}

int	convert::checkF(std::string input){
	int count = 0;
	if (type == 1)
		return (0);
	size_t pos = input.find('.');
	if (pos == std::string::npos)
		return (0);
	int len = input.length() - 1;
	for (int i = 0; input[i] != '\0'; i++){
		if (input[i] == 'f')
			count++;
		if ((isalpha(input[i]) && input[i] != 'f') || (count > 1))
			return (EXIT_FAILURE);
	}
	if (input[len] == 'f')
	{
		float f = std::stof(input);
		// if (f > FLT_MAX || f < -FLT_MIN){
		// 	std::cout << "overflow" << std::endl;
		// 	return (EXIT_FAILURE);
		// }
		type = 3;
		setF(f);
	}
	else
		checkD(input);
	for (int i = pos + 1; input[i] != '\0'; i++){
		if (input[i] != '0' && input[i] != 'f' && input[i] != '-'){
			zero = false;
			return (0);
		}
	}
	zero = true;
	return (0);
}

int	convert::checkD(std::string input){
	for (int i = 0; input[i] != '\0'; i++){
		if (isalpha(input[i]))
			return (EXIT_FAILURE);
	}
	double d = std::stod(input);
	if (d > DBL_MAX || d < -DBL_MIN){
		return (EXIT_FAILURE);
	}
	type = 4;
	setD(d);
	return (0);
}

int	convert::checkI(std::string input){
	if (type == 1 || type == 3 || type == 4)
		return (0);
	for (int i = 0; input[i] != '\0'; i++){
		if (isalpha(input[i]))
			return (EXIT_FAILURE);
	}
	long int i = std::stol(input);
	if (i == LONG_MAX || i > INT_MAX || i < INT_MIN){
			std::cout << "overflow" << std::endl;
			return (EXIT_FAILURE);
	}
	type = 2;
	setI(i);
	zero = true;
	return (0);
}

void	convert::convertC(){
		i = static_cast<int>(c);
		f = static_cast<float>(c);
		d = static_cast<double>(c);
}	

void	convert::convertI(){
		if (i > 0 && i < 216)
			c = static_cast<char>(i);
		f = static_cast<float>(i);
		d = static_cast<double>(i);
}

void	convert::convertF(){
		c = static_cast<char>(f);
		i = static_cast<int>(f);
		d = static_cast<double>(f);
}

void	convert::convertD(){
		c = static_cast<char>(d);
		i = static_cast<int>(d);
		f = static_cast<float>(d);
}

void	convert::doConvert(){
		if (type == 1)
			convertC();
		if (type == 2)
			convertI();
		if (type == 3)
			convertF();
		if (type == 4)
			convertD();
	}

int	convert::conversion(std::string input){
	std::cout << std::endl;
	if ((checkC(input) || checkF(input) || checkI(input)) == EXIT_FAILURE){
		std::cout << "that is not an acceptable char, float or double" << std::endl;
		return (EXIT_FAILURE);
	}
	doConvert();
	displayResults();
	return (0);
}

void convert::displayResults(){
	if (c < 33 || c > 126)
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: " << c << std::endl;
	std::cout << "int: " << i << std::endl;
	if (zero == true){
		std::cout << "float: " << f << ".0f" << std::endl;
		std::cout << "double: " << d << ".0" << std::endl;
	}
	else{
		std::cout << "float: " << f << "f" << std::endl;
		std::cout << "double: " << d << std::endl;
	}
}
