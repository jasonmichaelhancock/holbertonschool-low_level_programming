#include "holberton.h"
int _strlen(char *s);
/**
 * _puts_recursion - prints amstring without loops
 * pointer to the string..
 *
 * Return: void.
 */
void _puts_recursion(char *s)
{
	if (_strlen(s) == 0)
	{
		_putchar('\n');
		return;
	}
	_putchar(s[0]);
	_puts_recursion(s + 1);
}
int _strlen(char *s)
{
	int length;

	for (length = 0; s[length] != '\0'; length++)
	{

	}
	return (length);
}
