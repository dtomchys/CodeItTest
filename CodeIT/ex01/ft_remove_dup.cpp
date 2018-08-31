#include <set>

//The complexity of this algorithm is O(n).

void removeDuplicates(int *array, int *count)
{
	int 		last;
	std::set<int> 	hash;

	last = 0;
	if (*count <= 1)
		return ;
	for (int i = 0; i < *count; ++i)
	{
		if (hash.find(array[i]) == hash.end())
		{
			array[last++] = array[i];
			hash.insert(array[i]);
		}
	}
	*count = last;
}
