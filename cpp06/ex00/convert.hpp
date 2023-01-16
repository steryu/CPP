#ifndef __CONVERT_HPP__
#define __CONVERT_HPP__
#include <iostream>
#include <string>

class convert{
protected:
private:
	int		type;
	char 	c; //1
	int		i; //2
	float	f; //3
	double	d; //4
public:
	convert();
	virtual ~convert();
	convert(const convert &other);
	convert& operator=(const convert &other);
	void	conversion(std::string input);
	void	checkC(std::string input);
	void	checkI(std::string input);
	void	setC(char newC);
	void	setI(int newI);

	void displayResults();
};



#endif
