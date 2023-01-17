#include "main.h"

/**
  * _isalpha - Checks if char is an alphabet
  * @c: The character to be checked
  *
  * Return: 1 if true or 0 for anything else
  */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}

	return (0);
}
