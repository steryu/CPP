#include "Span.hpp"

Span::Span(){
	size = 0;
	std::cout << "Default Span constructor called" << std::endl;
}

Span::Span(unsigned int N){
	size = N;
	v1.reserve(N);
	std::cout << "Span made" << std::endl;
}

Span::~Span(){
	std::cout << "Span destroyed" << std::endl;
}

Span::Span(const Span &other){
	*this = other;
	std::cout << "Span copied" << std::endl;
}

Span& Span::operator=(const Span &other){
	v1 = other.v1;
	size = other.size;
	return(*this);
	std::cout << "Span copied using an assignment" << std::endl;
}

void	Span::addNumber(int N){
	if (v1.size() >= size)
		throw(std::out_of_range("maximum amount of stored integerd reached"));
	v1.push_back(N);
}

void	Span::addAllNumbers(int N){
	if (v1.size() > size)
		throw(std::out_of_range("maximum amount of stored integerd reached"));
	srand(time(0));
	for (unsigned int i = v1.size(); i < size; ++i){
		int nb = rand() % N;
		v1.push_back(nb);
	}
}

int	Span::shortestSpan(){
	if (v1.size() < 2)
		throw(std::out_of_range("not enough number to find the span"));
	int low = *std::max_element(v1.begin(), v1.end());
	int range;
	for (unsigned int i = 0; i != size; i++)
	{
		int nb = v1.at(i);
		for (std::vector<int>::iterator it = v1.begin() ; it != v1.end(); ++it)
		{
			if (nb > *it)
				range = (nb - *it);
			if (range < low)
				low = range;
		}
	}
	return (low);
}

int	Span::longestSpan(){
	if (v1.size() < 2)
		throw(std::out_of_range("not enough numbers to find the span"));
	int low = *std::min_element(v1.begin(), v1.end());
	int high = *std::max_element(v1.begin(), v1.end());
	int res = high - low;
	return (res);
}

void Span::info(){
	std::cout << v1.size() << std::endl;
	std::cout << v1.capacity() << std::endl;
}

void Span::print(){
	for (std::vector<int>::iterator ir = v1.begin(); ir != v1.end(); ++ir){
		std::cout << *ir << std::endl;
	}
}