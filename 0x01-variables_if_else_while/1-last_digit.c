#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main- main block
 * Description: get a random number and print the last digit of the number
 * and if it is greater than 5, is 0, and is greater than 6 and not 0
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
if (n%10 > 5)
printf("%d and is  greater than 5\n", n);
else if (n%10 == 0)
printf("%d and is o\n", n);
else if (n%10 > 6 && n%10 != 0)
printf("%d and and is less than 6 and not 0\n", n);
return (0);
}