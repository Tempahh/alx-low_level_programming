#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * alloc_grid - function to allocate memory to a new 2d array
 * @width: function parameter
 * @height: function parameter
 * Return: return the new 2d array
*/
int **alloc_grid(int width, int height)
{
int **new_array;
int wid_num, hei_num;
if(width == 0 || height == 0)
return (NULL);
new_array = malloc(height * sizeof(int *));
if (new_array == NULL)
return (NULL);
for (hei_num = 0; hei_num < height; hei_num++)
{
new_array[hei_num] = malloc(width * sizeof(int *));
if (new_array[hei_num] == NULL)
{
for (; hei_num > 0; hei_num--)
free(new_array[hei_num]);
free(new_array);
return (NULL);
}
}
for (hei_num = 0; hei_num < height; hei_num++)
{
for (wid_num = 0; wid_num < width; wid_num++)
new_array[hei_num][wid_num] = 0;       
}
return(new_array);
}
