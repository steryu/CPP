#include "MutantStack.hpp"

int	main(void)
{
	MutantStack<int> mstack;

	mstack.push(6);
	mstack.push(17);

	std::cout << mstack.top() << std::endl;

	mstack.pop();

	std::cout << mstack.size() << std::endl;

	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(19);

	std::cout << "size " << mstack.size() << std::endl;
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();

	std::cout << "begin: " << it << '\n';
	std::cout << "end: " << ite << '\n';

	std::cout << mstack.size() << std::endl;
	while (it != ite)
	{
		std::cout << mstack.top() << '\n';
		mstack.pop();
		std::cout << "iterator: " << *it << std::endl;
		++it;
	}
	// std::stack<int> s(mstack);
	return (0);
}