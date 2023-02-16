#include "MutantStack.hpp"

int	main(void)
{
	MutantStack<int> mstack;

	mstack.push(6);
	mstack.push(17);

	std::cout << mstack.top() << std::endl;

	mstack.pop();

	std::cout << "size: " << mstack.size() << std::endl;

	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(19);

	std::cout << "size: " << mstack.size() << std::endl;
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();

	std::cout << "\n" << "[begin iterator]" << '\n';
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::cout << "[end]" << std::endl;
	std::cout << *it << std::endl;
	return (0);
}
