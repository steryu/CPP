#include "Form.hpp"

Form::Form() 
	: name("Form 1"), GradeSign(5), GradeExecute(10){
	isSigned = false;
	std::cout << "Default Form constructor called" << std::endl;
}

Form::Form(const std::string newName, const int newGradeSign, const int newGradeExecute)
	: name(newName), GradeSign(newGradeSign), GradeExecute(newGradeExecute){
		isSigned = false;
	if (newGradeSign < 1)
		throw(GradeTooHighException());
	if (newGradeSign > 150)
		throw(GradeTooLowException());
	if (newGradeExecute < 1)
		throw(GradeTooHighException());
	if (newGradeExecute > 150)
		throw(GradeTooLowException());
	std::cout << "Form made" << std::endl;
}

Form::~Form(){
	std::cout << "Form destroyed" << std::endl;
}

Form::Form(const Form &other) : name(other.name), isSigned(other.isSigned),
	GradeSign(other.GradeSign), GradeExecute(other.GradeExecute){
	std::cout << "Form copied" << std::endl;
}

Form& Form::operator=(const Form &other){
	isSigned = other.isSigned;
	return(*this);
	std::cout << "Form copied using an assignment" << std::endl;
}

int	Form::getGradeSigned() const{
	return (GradeSign);
}

int	Form::getGradeExecute() const{
	return (GradeExecute);
}

std::string Form::getName(){
	return (name);
}

bool	Form::getisSinged(){
	return (isSigned);
}

void	Form::beSigned(Bureaucrat &b){
	if (b.getGrade() <= GradeSign)
		isSigned = true;
	else
		throw(GradeTooLowException());
}

const char*	Form::GradeTooLowException::what() const throw(){
	return ("Grade is too low!");
}

const char*	Form::GradeTooHighException::what() const throw(){
	return ("Grade is too high!");
}

std::ostream& operator<<(std::ostream& out, Form& f){
	out << f.getName() << " requires Grade " << f.getGradeSigned() << " to sign and Grade "\
	<< f.getGradeSigned() << " to execute it, the form is ";
	if (f.getisSinged() == false)
		out << "not signed";
	if (f.getisSinged() == true)
		out << "signed" << std::endl;
	return (out);
}
