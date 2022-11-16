#include "function_pointers.h"

/**
  * print_name - Prints name
  * @name: The name to print
  * @f: Pointer to a function
  *
  * Return: Nothing
  */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
