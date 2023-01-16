#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() 
	: target("none"), AForm("PresidentialPardonForm", 72, 45){
	std::cout << "Default PresidentialPardonForm created" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string newTarget) 
	: target(newTarget), AForm("PresidentialPardonForm", 72, 45){
	std::cout << "PresidentialPardonForm created" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm(){
	std::cout << "PresidentialPardonForm destroyed" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &other){
	*this = other;
	std::cout << "PresidentialPardonForm copied" << std::endl;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm &other){
	target = other.target;
	return(*this);
	std::cout << "PresidentialPardonForm copied using an assignment" << std::endl;
}

