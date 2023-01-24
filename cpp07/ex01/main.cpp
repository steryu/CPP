#include "iter.hpp"

int	main(void)
{
	int arr[3] = {0, 0, 0};
	char arrC[] = {'a' ,'b', 'c', 'd'};

	int len = sizeof(arr)/sizeof(arr[0]);
	int len2 = sizeof(arrC)/sizeof(arrC[0]);

	iter(arr, len, f);
	iter(arrC, len2, f);
	// return (0);
}