#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - calculates length of string
 *
 * @s: pointer to string
 *
 * Return: len (success)
 */

int _strlen(char *s)
{
	int i;
	int len = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		len++;
	}

	return (len);
}

/**
 * _intlen - calculates length of integer
 *
 * @n: number from stream
 *
 * Return: len (success)
 */

int _intlen(int n)
{
        int i;
        int len = 0;

	if (n < 10)
	{
		len = 1;
		return (len);
	}
	return (1 + _intlen(n / 10));
}
