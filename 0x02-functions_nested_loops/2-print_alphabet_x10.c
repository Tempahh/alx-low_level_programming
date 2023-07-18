#include "main.h"
/**
 * print_alphabetx10 - prints alphabet 10 times
 * 
 * Description- prints the alphabet in lowwercase 10 times
 * Return: Always 0.
*/
void print_alphabet_x10(void)
{
int a = 0;
while (a < 10)
{
char i = 'a';
while (i <= 'z')
{
_putchar(i);
i++;
}
a++;
_putchar('\n');
}
}
