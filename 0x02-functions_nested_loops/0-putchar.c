#include "main.h"
/**
 * main - entry point
 * Description- write a program to print out _putchar
 * Return -  0 shows program sucess
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
