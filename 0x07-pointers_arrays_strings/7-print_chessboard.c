#include "main.h"
/**
 * print_chessboard - print the chessboard, 2d array
 * @a: 2d array of chars
 */
void print_chessboard(char (*a)[8])
{
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; i < 8; j++)
        {
            _putchar(a[j][i]);
        }
        _putchar('\n');
    }   
}
