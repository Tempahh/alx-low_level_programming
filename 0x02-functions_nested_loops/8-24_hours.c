#include "main.h"
/**
 * jack_bauer - prints time
 *
 * Description: prints a list of time
 * Return: Always 0.
 */
void jack_bauer(void)
{
    int a = 0, b = 0;
    while (a < 24)
    {
        while (b < 60)
        {
            _putchar(b);
            b++;
        }
        _putchar(a);
        a++;
    }
    return (0);
}
