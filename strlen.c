#include "holberton.h"
/**
 * _strlen - returns the length of a string
 * @s: pointer char
 * Return: value
 */

int _strlen(char *s)
{

	int len = 0;

	while (*s != '\0')
	{
		len++;
	}
	return (len);
}
