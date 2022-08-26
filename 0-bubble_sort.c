#include "sort.h"

/**
 * bubble_sort - Sorting array of num using bubble sort
 * @array: Array
 * @size: Size of the array
 * Return: Void
**/

void bubble_sort(int *array, size_t size)
{
	size_t iterator, i, j;
	int tmp;

	if (array == NULL || size < 2)
		return;

	for (iterator = 1; iterator <= size; iterator++)
	{
		i = 0;
		j = 1;
		while (j <= (size - iterator))
		{
			if (array[i] > array[j])
			{
				tmp = array[i];
				array[i] = array[j];
				array[j] = tmp;
				print_array(array, size);
			}
			i++;
			j++;
		}
	}
}
