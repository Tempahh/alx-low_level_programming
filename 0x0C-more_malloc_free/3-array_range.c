#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - funtion to print an array of integers within a certain range
 * @min: starting integer
 * @max: maximum integer in the array
 * Return: new array if it is successful else return Null
*/
int *array_range(int min, int max)
{
	int *pointer, i;
	int size = (max + 1) - min;

	if (min > max)
		return (NULL);

	pointer = malloc(sizeof(int) * size);

	if (!pointer)
		return (NULL);

	for (i = 0; i < size; i++)
		pointer[i] = min++;

	return (pointer);
}
