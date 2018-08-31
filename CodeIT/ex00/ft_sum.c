#include <stdlib.h>

int	sum(int number)
{
	int res;

	res = 0;
	number = abs(number); //In case of passing a negative number value
	while (number)
	{
		res += number % 10;
		number /= 10;
	}
	return (res > 9 ? sum(res) : res);
}
