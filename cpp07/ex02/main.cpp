#include "Array.hpp"

int	main(void)
{
	Array<int> a;
	Array<int> a2(5);

	std::cout << a2[4] << std::endl;
	std::cout << "size is " << a2.size() << std::endl;
	try
	{
		std::cout << a2[6] << std::endl;
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	Array<int> Oa(5);
	Array<int> Ca(5);
	Oa = Ca;

	std::cout << std::endl;
	std::cout << "copy array [" << Ca[2] << "]" << std::endl;
	Ca[2] = 99;
	std::cout << "copy array changed to [" << Ca[2] << "]" << std::endl;
	std::cout << "orignal array still [" << Oa[2] << "]" << std::endl;
	std::cout << std::endl;
	return (0);
}