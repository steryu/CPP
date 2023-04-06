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


void	PmergeMe::insertSort(std::vector<int> vec, int pos, int len){
	int i, key, j;
	pos = 0;
	for (i = 0; i < len; i++)
		key = vec[i];
		j = i - 1;
		while (j >= 0 && vec[j] > key)
		{
			vec[j + 1] = vec[j];
			j = j - 1;
		}
		vec[j + 1] = key;
	// for (int i = pos; i < len; i++){
	// 	int temp = vec[i];
	// 	int j = i;
	// 	while (j > pos && vec[j] > temp){
	// 		vec[j] = vec[j];
	// 		j--;
	// 	}
	// 	vec[j] = temp;
	// }
	std::vector<int>::iterator it = vec.begin();
	while (it != vec.end()){
		std::cout << *it << std::endl;
		it++;
	}
}

void	PmergeMe::merge(std::vector<int> vec, int pos, int split, int len){
	int n1 = split - pos + 1;
	n1 = 0;
	int n2 = len - split;
	std::vector<int> leftV;
	std::vector<int> rightV;
	for (int i = 0; i < split; i++){
		leftV.push_back(vec[i]);
	}
	for (int i = split; i < len; i++){
		rightV.push_back(vec[i]);
	}
	int rIndex = 0;
	int lIndex = 0;
	for (int i = pos; i < len - pos + 1; i++){
		if (rIndex == n2){
			vec[i] = leftV[lIndex];
			lIndex++;
		}
		else if (lIndex == n1){
			vec[i] = rightV[rIndex];
			rIndex++;
		}
		else if (rightV[rIndex] > leftV[lIndex]){
			vec[i] = leftV[lIndex];
			lIndex++;
		}
		else{
			vec[i] = rightV[rIndex];
			rIndex++;
		}
	}
}

void	PmergeMe::sort(std::vector<int> vec, int pos, int len){
	if (len - pos > 5){
		int split = (pos + len) / 2;
		sort(vec, pos, split);
		sort(vec, split + 1, len);
		merge(vec, pos, split, len);
	}
	else{
		insertSort(vec, pos, len);
	}
}

void	PmergeMe::start(){
	sort(vec, 0, vec.size());
	// std::vector<int>::iterator it = vec.begin();
	// while (it != vec.end()){
	// 	std::cout << *it << std::endl;
	// 	it++;
	// }
}