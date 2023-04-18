#include "PmergeMe.hpp"

PmergeMe::PmergeMe(){
	std::cout << "Default PmergeMe constructor called" << std::endl;
}

PmergeMe::~PmergeMe(){
	std::cout << "PmergeMe destroyed" << std::endl;
}

PmergeMe::PmergeMe(const PmergeMe &other){
	*this = other;
	std::cout << "PmergeMe copied" << std::endl;
}

PmergeMe& PmergeMe::operator=(const PmergeMe &other){
	vec = other.vec;
	lst = other.lst;
	return(*this);
	std::cout << "PmergeMe copied using an assignment" << std::endl;
}

int	PmergeMe::initSequence(std::string input){
	int i = 0;
	for (unsigned long int i = 0; i < input.length(); i++){
		if (isdigit(input[i]) == 0){
			std::cerr << "please input only postivie digits" << std::endl;
			return (1);
		}
	}
	try {
		i = stoi(input);
	}
	catch(std::exception & e){
		std::cerr << "bad input" << std::endl;
		return (1);
	}
	vec.push_back(i);
	lst.push_front(i);
	return (0);
}

// List
void	PmergeMe::mergeLst(std::list<int>::iterator left, std::list<int>::iterator mid, std::list<int>::iterator right){
    std::list<int> merged;
    std::list<int>::iterator it1 = left, it2 = mid;
    while (it1 != mid && it2 != right){
        if (*it1 <= *it2) {
            merged.push_back(*it1);
            it1++;
        }
        else {
            merged.push_back(*it2);
            it2++;
        }
    }
    while (it1 != mid) {
        merged.push_back(*it1);
        it1++;
    }
    while (it2 != right) {
        merged.push_back(*it2);
        it2++;
    }
    for (std::list<int>::iterator it = left, it3 = merged.begin(); it != right; it++, it3++) {
        *it = *it3;
    }
}

void	PmergeMe::mergeInsertionSortLst(std::list<int>& lst, std::list<int>::iterator left, std::list<int>::iterator right, int k){
	if (left != right) {
        int size = 0;
        std::list<int>::iterator it;
        for (it = left; it != right; it++)
            size++;
        if (size <= k) {
            for (it = left; it != right; it++) {
                int key = *it;
                std::list<int>::iterator it2 = it;
                while (it2 != left && *(std::prev(it2)) > key) {
                    *it2 = *(std::prev(it2));
                    it2 = std::prev(it2);
                }
                *it2 = key;
            }
        }
        else {
            std::list<int>::iterator mid = left;
            for (int i = 0; i < size / 2; i++)
                ++mid;
            mergeInsertionSortLst(lst, left, mid, k);
            mergeInsertionSortLst(lst, mid, right, k);
            mergeLst(left, mid, right);
        }
    }
}

// Vector
void PmergeMe::mergeInsertionSortVec(std::vector<int>& vec, int left, int right, int k) {
	if (left < right){
		if (right - left <= k){
			for (size_t i = 1; i < vec.size(); i++){
				int key = vec[i];
				int j = i - 1;
				while (j >= 0 && vec[j] > key){
					vec[j + 1] = vec[j];
					j--;
				}
				vec[j + 1] = key;
			}
		}
		else{
			int mid = left + (right - left) / 2;
			mergeInsertionSortVec(vec, left, mid, k);
			mergeInsertionSortVec(vec, mid + 1, right, k);
			merge(vec, left, mid, right);
		}
	}
}

void	PmergeMe::writeResult(clock_t timeVec, clock_t timeLst){
	std::vector<int>::iterator it = vec.begin();
	std::cout << "After: ";
	while (it != vec.end()){
		std::cout << *it << " ";
		it++;
	}
	std::cout << std::endl << "Time to process a range of " << vec.size() << " elements with std::vector : " << std::fixed << (float)timeVec/CLOCKS_PER_SEC << " us";
	std::cout << std::endl << "Time to process a range of " << lst.size() << " elements with std::list : " << std::fixed << (float)timeLst/CLOCKS_PER_SEC << " us";
}

void	PmergeMe::start(){
	int k = 5;
	lst.reverse();
	std::vector<int>::iterator it = vec.begin();
	std::cout << "Before: ";
	while (it != vec.end()){
		std::cout << *it << " ";
		it++;
	}
	std::cout << std::endl;
	clock_t timeVec = clock();
	mergeInsertionSortVec(vec, 0, vec.size() - 1, k);
	timeVec = clock() - timeVec;
	clock_t timeLst = clock();
	mergeInsertionSortLst(lst, lst.begin(), lst.end(), k);
	timeLst = clock() - timeLst;
	writeResult(timeVec, timeLst);
	std::cout << std::endl;
}
