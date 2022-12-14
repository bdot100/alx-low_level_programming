#include "function_pointers.h"

/**
  * array_iterator - ...
  * @array: array to iterate
  * @size: size of the array
  * @action: function to point to
  *
  * Return: Nothing
  */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array != NULL && action != NULL && size > 0)
	{
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
