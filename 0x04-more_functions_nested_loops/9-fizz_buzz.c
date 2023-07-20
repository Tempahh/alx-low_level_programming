#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints 1 - 100 with factorial func
 *Return: Always 0.
*/
int main(void)
{
int a;
for (a = 1; a < 100; a++)
{
if (a % 15 == 0 )
{
printf("FizzBuzz ");
continue;
}
else if (a % 3 == 0)
{
printf("Fizz ");
continue;
}
else
{
if (a % 5 == 0)
{
printf("Buzz ");
}
}
printf("%d ", a);
}
printf("Buzz\n");
return (0);
}
