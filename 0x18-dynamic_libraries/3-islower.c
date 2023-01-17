#include "main.h"

/**
* _islower - checks if a character is lower case
* @c: the character to check
* Return: 1 if true, 0 otherwise
*/
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}

	return (0);
}
