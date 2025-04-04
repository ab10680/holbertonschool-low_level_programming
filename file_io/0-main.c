#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(int ac, char **av)
{
  ssize_t n; /* variable to store the number of printed characters */

  /* Check if the correct number of arguments is provided */
  if (ac != 2)
    {
      dprintf(2, "Usage: %s filename\n", av[0]); /* Print usage error */
      exit(1); /* Exit with error code */
    }

  /* Read and print the text file */
  n = read_textfile(av[1], 114);
  printf("\n(printed chars: %li)\n", n); /* Print the number of printed characters */
  n = read_textfile(av[1], 1024);
  printf("\n(printed chars: %li)\n", n); /* Print the number of printed characters */

  return (0); /* Return success */
}
