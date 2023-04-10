#ifndef __PMERGEME_HPP__
#define __PMERGEME_HPP__
#include <iostream>
#include <vector>
#include <iterator>
#include <ctime>
#include <iomanip>

class PmergeMe{
protected:
private:
	std::vector<int> vec;
public:
	PmergeMe();
	virtual ~PmergeMe();
	PmergeMe(const PmergeMe &other);
	// PmergeMe& operator=(const PmergeMe &other);
	// void	checkInput(std::string);
	void	initSequence(std::string input);
	void	start();
	void	writeResultVec(clock_t time);
	void	mergeSortVec(int k);
	void	mergeInsertionSort(std::vector<int>& vec, int left, int right, int k);
	void	merge(std::vector<int>& vec, int left, int mid, int right);
};

#endif
