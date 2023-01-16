#ifndef __FORM_HPP__
#define __FORM_HPP__
#include <iostream>
#include <exception>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form{
protected:
private:
	const std::string 	name;
	bool				isSigned;
	const int			GradeSign;
	const int			GradeExecute;
public:
	Form();
	Form(const std::string name, const int GradeSign, const int GradeExecute);
	virtual ~Form();
	Form(const Form &other);
	Form& operator=(const Form &other);
	int	getGradeSigned() const;
	int	getGradeExecute() const;
	std::string getName();
	bool	getisSinged();
	void	beSigned(Bureaucrat &b);
	class GradeTooLowException : public std::exception{
		const char* what() const throw();
	};
	class GradeTooHighException : public std::exception{
		const char* what() const throw();
	};
};

std::ostream& operator<<(std::ostream& out, Form& f);

#endif
