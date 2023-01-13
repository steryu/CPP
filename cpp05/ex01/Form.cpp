#include "Form.hpp"

Form::Form() 
	: name("Form"), gradeSign(5), gradeExecute(10){
	isSigned = false;
	std::cout << " Default Form constructor called" << std::endl;
}

Form::~Form(){
	std::cout << "Form destroyed" << std::endl;
}

Form::Form(const Form &other){
	*this = other;
	std::cout << "Form copied" << std::endl;
}

Form& Form::operator=(const Form &other){
	// other = other.;
	// other = other.;
	return(*this);
	std::cout << "Form copied using an assignment" << std::endl;
}

int	Form::
