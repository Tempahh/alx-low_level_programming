#include "main.h"
/**
 * print_alphabetx10 - entry point
 * Description- prints the alphabet in lowwercase 10 times
 * Return: Always 0.
*/
int main(void)
{
int a;
while (a < 10)
{
int i = 'a';
while (i <= 'z')
{
_putchar(i);
i++;
}
_putchar('\n');
a++;
}
}
