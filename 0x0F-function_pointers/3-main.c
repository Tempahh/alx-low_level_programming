#include "3-calc.h"
/**
 * main - performs simple operations
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 if no errors
 */
int main (int argc, char *argv[])
{
int i, j;
int (*func) (int, int);

if (argc != 4)
printf("Error"), exit (98);
func = get_op_func(argv[2]);
if (!func)
printf("Error \n"), exit (99);
i = atoi(argv[1]);
j = atoi(argv[3]);
printf("%i \n", func(i, j));
return (0);
}
