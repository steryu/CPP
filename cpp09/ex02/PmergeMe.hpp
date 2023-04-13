#ifndef __PMERGEME_HPP__
#define __PMERGEME_HPP__
#include <iostream>
#include <vector>
#include <forward_list>
#include <iterator>
#include <ctime>
#include <iomanip>

class PmergeMe{
protected:
private:
	std::vector<int> vec;
	std::forward_list<int> lst;
	// static int size;
public:
	PmergeMe();
	virtual ~PmergeMe();
	PmergeMe(const PmergeMe &other);
	// PmergeMe& operator=(const PmergeMe &other);
	// void	checkInput(std::string);
	void	initSequence(std::string input);
	void	start();
	void	writeResult(clock_t timeVec, clock_t timeLst);

	void	mergeInsertionSortVec(std::vector<int>& vec, int left, int right, int k);
	void	merge(std::vector<int>& vec, int left, int mid, int right);
	void	mergeInsertionSortLst(std::forward_list<int>& lst, std::forward_list<int>::iterator left, std::forward_list<int>::iterator right, int k);
	void	mergeLst(std::forward_list<int>::iterator left, std::forward_list<int>::iterator mid, std::forward_list<int>::iterator right);
};

#endif
