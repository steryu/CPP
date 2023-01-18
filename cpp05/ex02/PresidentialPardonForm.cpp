#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() 
	: AForm("PresidentialPardonForm", 25, 5, "none"){
	std::cout << "Default PresidentialPardonForm created" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string newTarget)
	: AForm("PresidentialPardonForm", 25, 5, newTarget){
	std::cout << "PresidentialPardonForm created" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm(){
	std::cout << "PresidentialPardonForm destroyed" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &other)
	: AForm(other.getName(), other.getGradeSigned(), other.getGradeExecute(), other.getTarget()){	
	*this = other;
	std::cout << "PresidentialPardonForm copied" << std::endl;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm &other){
	other.getName(), other.getGradeSigned(), other.getGradeExecute(), other.getTarget();
	return(*this);
	std::cout << "PresidentialPardonForm copied using an assignment" << std::endl;
}

void	PresidentialPardonForm::execute(Bureaucrat const & executor) const{
	checkForm(executor);
	std::cout << getTarget() << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}