#ifndef __BUREAUCRAT_HPP__
#define __BUREAUCRAT_HPP__
#include "Form.hpp"
#include <iostream>
#include <exception>
#include <string>

class Form;

class Bureaucrat{
protected:
private:
	const std::string name;
	int			grade;
public:
	Bureaucrat();
	Bureaucrat(int nb);
	virtual ~Bureaucrat();
	Bureaucrat(const Bureaucrat &other);
	Bureaucrat& operator=(const Bureaucrat &other);
	std::string	getName();
	int		getGrade() const;
	void	IncrementGrade(int nb);
	void	DecrementGrade(int nb);

	class	GradeTooHighException : public std::exception{
		const char* what() const throw();
	};
	class	GradeTooLowException : public std::exception{
		const char* what() const throw();
	};
	void	signForm(Form &f);
};

std::ostream& operator<<(std::ostream& out, Bureaucrat& f);

#endif
