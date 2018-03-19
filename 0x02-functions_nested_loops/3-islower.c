#include "holberton.h"

/**
 * _islower - Entry point
 * @c: the value to return
 *
 * Return: Always 0 (Success)
 */
int _islower(int c)
{
	if (c >= 'a' && c  <= 'z')
		return (1);
	else
		return (0);
}
