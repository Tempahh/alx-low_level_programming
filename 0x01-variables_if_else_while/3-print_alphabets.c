#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main- main block
 * Description: prints in lowercase, then UPPERCASE followed by a new line.
 * Return: 0
 */
int main(void)
{
char c = 'a';
char d = 'A';
while (c <= 'z')
{
putchar(c);
c++;
}
while (d <= 'Z')
{
putchar(d);
d++;
}

putchar('\n');
return (0);
}
