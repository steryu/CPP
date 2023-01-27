#ifndef __SPAN_HPP__
#define __SPAN_HPP__
#include <iostream>
#include <vector>
#include <iterator>
#include <cstdlib>
#include <algorithm>

class Span{
protected:
private:
	unsigned int size;
	std::vector<int> v1;
public:
	Span();
	Span(unsigned int N);
	virtual ~Span();
	Span(const Span &other);
	Span& operator=(const Span &other);
	void	addNumber(int N);
	void	addAllNumbers(int N);
	int		shortestSpan();
	int		longestSpan();
	void	info();
	void	print();
};

#endif
