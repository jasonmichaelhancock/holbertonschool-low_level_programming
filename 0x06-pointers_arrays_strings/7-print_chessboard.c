#include "holberton.h"

/**
 * print_chessboard - create chessboard
 * @a: the array variable
 *
 * Return: Always 0.
 */
void print_chessboard(char (*a)[8])
{
	int row = 0;
	int col = 0;
	int cell;

	while (row < 8)
	{
		col = 0;
		while (col < 8)
		{
			cell = a[row][col];
			_putchar (cell);
			col++;
		}
		_putchar ('\n');
		row++;
	}
}
