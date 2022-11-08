#include <stdio.h>
#include "main.h"

/**
  * main - Prints the no of args passed into the program
  * @argc: argument count
  * @argv: argument vector
  *
  * Return: Always zero
  */
int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
