#include "Intern.hpp"

Intern::Intern(){
	std::cout << "Default Intern constructor called" << std::endl;
}

Intern::~Intern(){
	std::cout << "Intern destroyed" << std::endl;
}

Intern::Intern(const Intern &other){
	*this = other;
	std::cout << "Intern copied" << std::endl;
}

Intern& Intern::operator=(const Intern &other){
	(void) other;
	return(*this);
	std::cout << "Intern copied using an assignment" << std::endl;
}

AForm* ShrubberyCreation(std::string target){
	ShrubberyCreationForm* form = new ShrubberyCreationForm(target);
	return (form);
}

AForm* RobotomyCreation(std::string target){
	RobotomyRequestForm* form = new RobotomyRequestForm(target);
	return (form);
}

AForm* PresidentialCreation(std::string target){
	PresidentialPardonForm* form = new PresidentialPardonForm(target);
	return (form);
}

int	Intern::checkForm(std::string name)
{
	static std::string str[3] = {"shrubbery request", "robotomy request", "presidential request"};
	for (int i = 0; i < 3; i++){
		if (str[i] == name)
			return (i);
	}
	return (3);
}

AForm* Intern::makeForm(std::string name, std::string target){
	int n = checkForm(name);
	switch (n)
	{
		case 0:
			std::cout << "Intern creates a ShrubberyCreationForm" << std::endl;
			return (ShrubberyCreation(target));
		case 1:
			std::cout << "Intern creates a RobotomyRequestForm" << std::endl;
			return (RobotomyCreation(target));
		case 2:
			std::cout << "Intern creates a PresidentialPardonForm" << std::endl;
			return (PresidentialCreation(target));
		default:
			std::cout << "Form name doesn't exist!" << std::endl;
			break ;
	}
	return (0);
}

