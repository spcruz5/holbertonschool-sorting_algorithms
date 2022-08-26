#include "sort.h"

/**
 * selection_sort - sorts an array of int in ascending
 * order using the Selection sort algorithm
 * @array: array
 * @size: size
 */

void selection_sort(int *array, size_t size)
{
	size_t i = 0, j = 0, pos = 0;
	int n = 0;

	if (!array)
		return;
	while (i < size - 1)
	{
		n = array[i];
		j = i + 1;
		pos = i;
		while (j < size)
		{
			if (n > array[j])
			{
				n = array[j];
				pos = j; }
			j++;
		}
		if (array[pos] != array[i])
		{
			array[pos] = array[i];
			array[i] = n;
			print_array(array, size); }
		i++;
	}
}
