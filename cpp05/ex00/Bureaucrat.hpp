#ifndef __BUREAUCRAT_HPP__
#define __BUREAUCRAT_HPP__
#include <iostream>
#include <exception>
#include <string>

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
};

std::ostream& operator<<(std::ostream& out, Bureaucrat& f);

#endif
