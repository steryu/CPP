#include "iter.hpp"

int	main(void)
{
	int arr[3] = {1, 2, 3};
	// char arr2[4] = {'a' ,'b', 'c', 'd'};

	int len = sizeof(arr)/sizeof(arr[0]);
	// int len2 = sizeof(arr2)/sizeof(arr2[0]);

	iter(arr, len, f);
	// iter(arr2, len2, f);
	// return (0);
}