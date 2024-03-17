#include "search_algos.h"
/**
 * jump_search - looks for a value in a sorted array of integers
 *
 * @array: pointer to the first element of the array to search in.
 * @size: number of elements in array.
 * @value: value to search for.
 *
 * Return: The first index where value is located.
 */
int jump_search(int *array, size_t size, int value){
	size_t index, jump, step;

	if (array == NULL || size == 0)
		return (-1);

	step = sqrt(size);
	for (index = jump = 0; jump < size && array[jump] < value;){
		printf("Value checked array[%ld] = [%d]\n", jump, array[jump]);
		index = jump;
		jump += step;
	}

	printf("Value found between indexes [%ld] and [%ld]\n", index, jump);

	jump = jump < size - 1 ? jump : size - 1;
	for (; index < jump && array[index] < value; index++)
		printf("Value checked array[%ld] = [%d]\n",
				index, array[index]);
	printf("Value checked array[%ld] = [%d]\n", index, array[index]);
	return (array[index] == value ? (int)index : -1);
}
