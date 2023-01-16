#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() 
	: target("none"), AForm("RobotomyRequestForm", 25, 5){
	std::cout << "Default RobotomyRequestForm created" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string newTarget) 
	: target(newTarget), AForm("RobotomyRequestForm", 25, 5){
	std::cout << "RobotomyRequestForm created" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm(){
	std::cout << "RobotomyRequestForm destroyed" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other){
	*this = other;
	std::cout << "RobotomyRequestForm copied" << std::endl;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm &other){
	target = other.target;
	return(*this);
	std::cout << "RobotomyRequestForm copied using an assignment" << std::endl;
}

