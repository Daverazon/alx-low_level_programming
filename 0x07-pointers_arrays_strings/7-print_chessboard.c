/*Write a function that prints the chessboard.*/
#include "main.h"

/**
 * print_chessboard - prints the chessboard
 * @a: characters of the board
 */
void print_chessboard(char (*a)[8])
{
	int column, row;

	for (row = 0; a[row][7]; row++)
	{
		for (column = 0; column < 8; column++)
			_putchar(a[row][column]);
		_putchar('\n');
	}
}
