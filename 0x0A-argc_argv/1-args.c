#include<stdio.h>
#define UNUSED(x) (void)(x)

/**
 * main - function
 *
 * @argv: the chaine of chaine
 * @argc: the int
 * Return: Always 0.
 */

int main(int argc, char **argv)
{
	UNUSED(argv);
	printf("%d\n", argc - 1);

	return (0);
}
