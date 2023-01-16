#ifndef __AFORM_HPP__
#define __AFORM_HPP__
#include <iostream>
#include <exception>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm{
protected:
private:
	const std::string 	name;
	bool				isSigned;
	const int			GradeSign;
	const int			GradeExecute;
public:
	AForm();
	AForm(const std::string name, const int GradeSign, const int GradeExecute);
	virtual ~AForm();
	AForm(const AForm &other);
	AForm& operator=(const AForm &other);
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
	class FormNotSigned : public std::exception{
		const char* what() const throw();
	};
	void	checkForm(Bureaucrat const & executor) const;
	virtual void	execute(Bureaucrat const & executor) const = 0;
};

std::ostream& operator<<(std::ostream& out, AForm& f);

#endif
