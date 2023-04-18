#ifndef __PMERGEME_HPP__
#define __PMERGEME_HPP__
#include <iostream>
#include <vector>
#include <list>
#include <iterator>
#include <ctime>
#include <iomanip>

class PmergeMe{
protected:
private:
	std::vector<int> vec;
	std::list<int> lst;
public:
	PmergeMe();
	virtual ~PmergeMe();
	PmergeMe(const PmergeMe &other);
	PmergeMe& operator=(const PmergeMe &other);
	int		initSequence(std::string input);
	void	start();
	void	writeResult(clock_t timeVec, clock_t timeLst);

	void	mergeInsertionSortVec(std::vector<int>& vec, int left, int right, int k);
	void	merge(std::vector<int>& vec, int left, int mid, int right);
	void	mergeInsertionSortLst(std::list<int>& lst, std::list<int>::iterator left, std::list<int>::iterator right, int k);
	void	mergeLst(std::list<int>::iterator left, std::list<int>::iterator mid, std::list<int>::iterator right);
};

#endif
