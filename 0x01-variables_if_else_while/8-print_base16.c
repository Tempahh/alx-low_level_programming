#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main- main block
 * Description: prints numbers within base16
 * Return: 0
 */
int main(void)
{
char d;
int c;
for (c = 0; c < 10; c++)
{
putchar(c + '0');
}
for (d = 'a'; d < 'g'; d++)
{
putchar(d);
}
putchar('\n');
return (0);
}
