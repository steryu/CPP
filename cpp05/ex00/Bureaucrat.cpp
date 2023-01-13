#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() 
	: name("Hasseeb"){
	grade = 0;
	if (grade < 1){
		throw (GradeTooHighException());
	}
	if (grade > 150){
		throw (GradeTooLowException());
	}
	std::cout << "Default Bureaucrat constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(int nb)
	: name("Hasseeb"){
	grade = nb;
	if (grade < 1){
		throw (GradeTooHighException());
	}
	if (grade > 150){
		throw (GradeTooLowException());
	}
	std::cout << "Default Bureaucrat constructor called" << std::endl;
}

Bureaucrat::~Bureaucrat(){
	std::cout << "\nBureaucrat destroyed" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &other){
	*this = other;
	std::cout << "Bureaucrat copied" << std::endl;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat &other){
	grade = other.getGrade();
	return(*this);
	std::cout << "Bureaucrat copied using an assignment" << std::endl;
}

const char*	Bureaucrat::GradeTooHighException::what() const throw(){
	return ("Grade is too high!");
}

const char*	Bureaucrat::GradeTooLowException::what() const throw(){
	return ("Grade is too low!");
}

std::string	Bureaucrat::getName(){
	return (name);
}

int	Bureaucrat::getGrade() const{
	return (grade);
}

void	Bureaucrat::IncrementGrade(int nb){
	std::cout << "Incrementing grade by " << nb << std::endl;
	grade -= nb;
	if (grade < 1)
		throw (GradeTooHighException());
}

void	Bureaucrat::DecrementGrade(int nb){
	std::cout << "Decrementing grade by " << nb << std::endl;
	grade += nb;
	if (grade > 150)
		throw (GradeTooLowException());
}

std::ostream& operator<<(std::ostream& out, Bureaucrat& b){
	out << b.getName() << ", bureaucrat grade " << b.getGrade();
	return (out);
}