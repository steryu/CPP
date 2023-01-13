#ifndef __FORM_HPP__
#define __FORM_HPP__
#include <iostream>

class Form{
protected:
private:
	const std::string 	name;
	bool				isSigned;
	const int			GradeSign;
	const int			GradeExecute;
public:
	Form();
	virtual ~Form();
	Form(const Form &other);
	Form& operator=(const Form &other);
	int	getGradeSigned();
	int	getGradeExcute();
	class GradeTooLowException : public std::exception{
	};
	class GradeTooHighException : public std::exception{
	};
};

std::ostream& operator<<(std::ostream& out, Form& f);

#endif
