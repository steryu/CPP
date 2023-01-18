#ifndef __INTERN_HPP__
#define __INTERN_HPP__
#include <iostream>
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "AForm.hpp"

class AForm;

class Intern{
protected:
private:
public:
	Intern();
	virtual ~Intern();
	Intern(const Intern &other);
	Intern& operator=(const Intern &other);
	AForm* makeForm(std::string name, std::string target);
	int	checkForm(std::string name);
};

#endif
