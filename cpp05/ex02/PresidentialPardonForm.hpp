#ifndef __PRESIDENTIALPARDONFORM_HPP__
#define __PRESIDENTIALPARDONFORM_HPP__
#include "AForm.hpp"
#include <iostream>

class PresidentialPardonForm : public AForm{
protected:
private:
public:
	PresidentialPardonForm();
	PresidentialPardonForm(std::string target);
	virtual ~PresidentialPardonForm();
	PresidentialPardonForm(const PresidentialPardonForm &other);
	PresidentialPardonForm& operator=(const PresidentialPardonForm &other);
	void	execute(Bureaucrat const & executor) const;
};

#endif
