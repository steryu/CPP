#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() 
	: target("none"), AForm("ShrubberyCreationForm", 145, 137){
	std::cout << "Default ShrubberyCreationForm created" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string newTarget) 
	: target(newTarget), AForm("ShrubberyCreationForm", 145, 137){
	std::cout << "ShrubberyCreationForm created" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm(){
	std::cout << "ShrubberyCreationForm destroyed" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other) 
	: target(other.target){
	*this = other;
	std::cout << "ShrubberyCreationForm copied" << std::endl;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other){
	target = other.target;
	return(*this);
	std::cout << "ShrubberyCreationForm copied using an assignment" << std::endl;
}

void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const{
	checkForm(executor);
	std::cout << "form executed!!" << std::endl;
}
