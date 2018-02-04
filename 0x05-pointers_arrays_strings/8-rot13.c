#include "holberton.h"

/**
 * rot13 - Rotate letters by 13.
 * @s: the array value.
 *
 * Return: The array.
 */
char *rot13(char *s)
{
        char *alpha = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
        char *num = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
        int i;
        int j;

        for (i = 0; s[i] != '\0'; i++)
        {
                for (j = 0; alpha[j] != '\0'; j++)
                {
                        if (s[i] == alpha[j])
                        {
                                s[i] = num[j];
                        }
                }
        }
        return (s);
}
