#include <stdbool.h>

bool isNumberPowerOfThree(int number)
{
	return (number && (1162261467 % number == 0));
}
