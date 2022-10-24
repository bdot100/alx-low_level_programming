#include "main.h"

/**
 * _strlen- print the length of a char
 * @s: points to the char
 * Return: length of the char
 */

int _strlen(char *s)
{
	int c = 0;

	for (; *s != '\0'; s++)
	{
		c++;
	}
	return (c);
}
