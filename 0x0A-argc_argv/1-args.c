#include "main.h"
#include <stdio.h>

/**
  * main - the entry point of our program
  * @argc: the number of arguments
  * @argv: a 2d array of arguments
  *
  * Return: always 0
  */
int main(int argc, char __attribute__((unused)) *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
