#include <stdio.h>

/**
* main - print the number of srgumenrs passed into it.
* @argc: number of command line arguments
* @argc: array that contains the program command line arguments
* Return: always 0
*/
int main(int argc, char *argv[] __attribute__((unused)))
{
  printf("%d\n", argc - 1);
  return (0);
}
