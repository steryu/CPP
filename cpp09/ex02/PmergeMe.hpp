#ifndef __PMERGEME_HPP__
#define __PMERGEME_HPP__
#include <iostream>
#include <vector>
#include <iterator>

class PmergeMe{
protected:
private:
	std::vector<int> vec;
public:
	PmergeMe();
	virtual ~PmergeMe();
	PmergeMe(const PmergeMe &other);
	// PmergeMe& operator=(const PmergeMe &other);
	void	checkInput(std::string);
	void	initSequence(std::string input);
	void	sort(std::vector<int> vec, int pos, int len);
	void	start();
	void	merge(std::vector<int> vec, int pos, int split, int len);
	void	insertSort(std::vector<int> vec, int pos, int len);
};

#endif
