#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main- main block
 * Description: prints numbers 0-9
 * Return: 0
 */
int main(void)
{
int c;
for (c = 0; c <= 9; c++)
{
putchar(c + '0');
if (c != 9)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
