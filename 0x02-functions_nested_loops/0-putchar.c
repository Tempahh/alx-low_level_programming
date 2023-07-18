#include "main.h"
/**
 * main - prints _putchar
 * Description- write a program to print out _putchar
 * Return: Always 0.
*/
int main(void)
{
char *ch = "_putchar";
while (*ch)
{
_putchar(*ch);
ch++;
}
_putchar('\n');
return (0);
}
