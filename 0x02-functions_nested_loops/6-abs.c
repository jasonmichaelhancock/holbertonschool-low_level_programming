#include "holberton.h"

/**
 * _abs - Entry point
 * @int: the value to return
 *
 * Return: int
 */
int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		return (n * (-1));
	}
}
