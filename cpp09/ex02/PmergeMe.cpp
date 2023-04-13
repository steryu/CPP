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

// PmergeMe& PmergeMe::operator=(const PmergeMe &other){
// 	return(*this);
// 	std::cout << "PmergeMe copied using an assignment" << std::endl;
// }

void	PmergeMe::initSequence(std::string input){
	int i = stoi(input);
	vec.push_back(i);
	lst.push_front(i);
	// size++;
}

// Forward_list


// Vector
void PmergeMe::merge(std::vector<int>& vec, int left, int mid, int right){
    int n1 = mid - left + 1;
    int n2 = right - mid;

    std::vector<int> L(n1), R(n2);

    for (int i = 0; i < n1; i++)
        L[i] = vec[left + i];
    for (int j = 0; j < n2; j++)
        R[j] = vec[mid + 1 + j];

    int i = 0, j = 0, k = left;

    while (i < n1 && j < n2){
        if (L[i] <= R[j]){
            vec[k] = L[i];
            i++;
        }
        else{
            vec[k] = R[j];
            j++;
        }
        k++;
    }
    while (i < n1){
        vec[k] = L[i];
        i++;
        k++;
    }
    while (j < n2){
        vec[k] = R[j];
        j++;
        k++;
    }
}

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
	timeVec = (clock() - timeVec);
	timeLst = (clock() - timeLst);
	std::cout << std::endl << "Time to process a range of " << vec.size() << " elements with std::vector : " << std::fixed << (float)timeVec/CLOCKS_PER_SEC << " us";
	std::cout << std::endl << "Time to process a range of " << "10" << " elements with std::forward_list : " << std::fixed << (float)timeLst/CLOCKS_PER_SEC << " us";
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
	clock_t timeLst = clock();
	// mergeInsertionSortLst(lst, lst.begin(), lst.end(), k);
	writeResult(timeVec, timeLst);
	std::cout << std::endl;
}
