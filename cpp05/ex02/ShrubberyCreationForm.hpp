#ifndef __SHRUBBERYCREATIONFORM_HPP__
#define __SHRUBBERYCREATIONFORM_HPP__
#include "AForm.hpp"
#include <iostream>
#include <fstream>

class ShrubberyCreationForm : public AForm{
protected:
private:
public:
	ShrubberyCreationForm();
	ShrubberyCreationForm(std::string newTarget);
	virtual ~ShrubberyCreationForm();
	ShrubberyCreationForm(const ShrubberyCreationForm &other);
	ShrubberyCreationForm& operator=(const ShrubberyCreationForm &other);
	void	execute(Bureaucrat const & executor) const;
};

#endif
