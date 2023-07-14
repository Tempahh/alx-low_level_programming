#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main- main block
 * Description: prints numbers 0-9 with a comma at the back
 * Return: 0
 */
int main(void)
{
int a, b, c;
for (a = 0; a <= 99; a++)
{
b = a % 10; /*this fetches single digits*/
c = a / 10;/*this fetches double digits*/
if (c < b)
{
putchar(c + '0');
putchar(b + '0');
if (a < 89)
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
