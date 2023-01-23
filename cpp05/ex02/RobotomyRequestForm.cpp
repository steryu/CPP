#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() 
	: AForm("RobotomyRequestForm", 72, 45, "none"){
	std::cout << "Default RobotomyRequestForm created" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string newTarget)
	: AForm("RobotomyRequestForm", 72, 45, newTarget){
	std::cout << "RobotomyRequestForm created" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm(){
	std::cout << "RobotomyRequestForm destroyed" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other)
	: AForm(other.getName(), other.getGradeSigned(), other.getGradeExecute(), other.getTarget()){	
	*this = other;
	std::cout << "RobotomyRequestForm copied" << std::endl;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm &other){
	other.getName(), other.getGradeSigned(), other.getGradeExecute(), other.getTarget();
	return(*this);
	std::cout << "RobotomyRequestForm copied using an assignment" << std::endl;
}

void	RobotomyRequestForm::execute(Bureaucrat const & executor) const{
	checkForm(executor);
	std::cout << "*BRRRRrrrr Brr*" << std::endl;
	srand(time(0));
	int num = (rand() % 2);
	if (num == 1)
		std::cout << getTarget() << " has been robotomized successfully " << std::endl;
	else
		std::cout << "the robotomy has failed" << std::endl;
}