#include <stdio.h>
#include <stdlib.h>
/**
 * array_iterator - function to call a function pointer
 * @array: function parameter
 * @size: function parameter
 * @action: function pointer
*/
void array_iterator(int *array, size_t size, void(*action)(int))
{
	if (action && array)
		while (size--)
			action(*(array++));
}
