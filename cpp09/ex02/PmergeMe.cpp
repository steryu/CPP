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
}

void PmergeMe::merge(std::vector<int>& vec, int left, int mid, int right){
    int n1 = mid - left + 1;
    int n2 = right - mid;

    std::vector<int> L(n1), R(n2);

    for (int i = 0; i < n1; i++)
        L[i] = vec[left + i];
    for (int j = 0; j < n2; j++)
        R[j] = vec[mid + 1 + j];

    int i = 0, j = 0, k = left;

    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            vec[k] = L[i];
            i++;
        }
        else {
            vec[k] = R[j];
            j++;
        }
        k++;
    }
    while (i < n1) {
        vec[k] = L[i];
        i++;
        k++;
    }
    while (j < n2) {
        vec[k] = R[j];
        j++;
        k++;
    }
}

void PmergeMe::mergeInsertionSort(std::vector<int>& vec, int left, int right, int k) {
	if (left < right){
		if (right - left <= k)
		{
			for (size_t i = 1; i < vec.size(); i++)
			{
				int key = vec[i];
				int j = i - 1;
				while (j >= 0 && vec[j] > key){
					vec[j + 1] = vec[j];
					j--;
				}
				vec[j + 1] = key;
			}
		}
	}
	else{
		int mid = left + (right - left) / 2;
        mergeInsertionSort(vec, left, mid, k);
        mergeInsertionSort(vec, mid + 1, right, k);
        merge(vec, left, mid, right);
	}
}

void	PmergeMe::mergeSortVec(int k){
	int n = vec.size();
	mergeInsertionSort(vec, 0, n - 1, k);
}

void	PmergeMe::writeResultVec(clock_t time){
	std::vector<int>::iterator it = vec.begin();
	std::cout << "After: ";
	while (it != vec.end()){
		std::cout << *it << " ";
		it++;
	}
	time = (clock() - time);
	std::cout << std::endl << "Time to process a range of " << vec.size() << "elements with std::vector : " << std::fixed << std::setprecision(sizeof(time)) << (float)time/CLOCKS_PER_SEC << " us";
	std::cout << std::endl << "Time to process a range of " << vec.size() << "elements with std::array : ";
}

void	PmergeMe::start(){
	int k = 5;
	std::vector<int>::iterator it = vec.begin();
	std::cout << "Before: ";
	while (it != vec.end()){
		std::cout << *it << " ";
		it++;
	}
	std::cout << std::endl;
	clock_t time = clock();
	mergeSortVec(k);
	writeResultVec(time);
	std::cout << std::endl;
}
