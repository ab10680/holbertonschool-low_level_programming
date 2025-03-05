#include <stdio.h>
#include "main.h"

/**
 * main - prints all arguments it receives
 * @argc: number of command line arguments
 * @argv: array of command line arguments
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
int i; /* Declare the loop variable outside */
for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
