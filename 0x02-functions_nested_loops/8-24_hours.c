#include "main.h"
/**
 * jack_bauer - prints time
 *
 * Description: prints a list of time
 * Return: Always 0.
 */
void jack_bauer(void)
{
int a, b;
for(a = 0; a < 24; a++)
{
for (b = 0; b < 60; b++)
{
_putchar(a + 48);
_putchar(':');
_putchar(b + 48);
}
}
}
