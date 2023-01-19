#ifndef __CONVERT_HPP__
#define __CONVERT_HPP__
#include <iostream>
#include <string>
#include <climits>
#include <cfloat>
#include <cmath>

class convert{
protected:
private:
	int		type;
	char 	c; //1
	int		i; //2
	float	f; //3
	double	d; //4
	bool	zero;
public:
	convert();
	virtual ~convert();
	convert(const convert &other);
	convert& operator=(const convert &other);
	int		conversion(std::string input);
	int		checkC(std::string input);
	int		checkI(std::string input);
	int		checkF(std::string input);
	int		checkD(std::string input);
	void	setC(char newC);
	void	setI(int newI);
	void	setF(float newF);
	void	setD(double newD);
	void	doConvert();
	void	convertC();
	void	convertI();
	void	convertF();
	void	convertD();

	void displayResults(std::string input);
};


#endif
