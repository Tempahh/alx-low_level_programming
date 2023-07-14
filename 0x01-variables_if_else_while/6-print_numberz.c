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
for (c = 0; c < 10; c++)
{
putchar(c + '0');
}
putchar('\n');
return (0);
}
