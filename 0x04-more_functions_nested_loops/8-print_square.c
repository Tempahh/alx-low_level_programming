#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_square- prints #
 * @size: parameter to collect args
 * Return: Always 0.
*/
int main(int size)
{
int a = 0;
while (a < size)
{
int b = 0;
while (b > a)
{
if (size == 0 || size < 0)
{
printf("%d", 2);
break;
}
printf("%d", 2);
b++;
}
printf("%d", 2);
a++;
}    
}
