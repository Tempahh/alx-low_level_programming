#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main- main block
 * Description: prints alphabet in lowercase and excludes E and Q.
 * Return: 0
 */
int main(void) 
{
char c = 'a';
while (c <= 'z') 
{
if (c != 'e' && c != 'q')
putchar(c);
c++;
}
putchar('\n');
return 0;
}
