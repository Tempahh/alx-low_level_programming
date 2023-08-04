#include <stdio.h>
/**
 * main - prints the largest prime factor of 612852475143
 * Return: always 0
 */
int main(void)
{
unsigned long int i, n = 612852475143;
for (i = 3; i * i <= n; i= i+2)
{
while ((n % i == 0) && (n != i))
n = n / i;
}
printf("%lu\n", n);
return (0);
}
