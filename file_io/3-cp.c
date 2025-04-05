#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * create_buffer - function that allocates 1024 bytes for a buffer.
 * @file: pointer to the file buffer is storing chars for.
 *
 * Return: A pointer to the newly-allocated buffer.
 */
char *create_buffer(char *file)
{
  char *buffer;
  buffer = malloc(sizeof(char) * 1024);
  if (!buffer)
    {
      dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
      exit(99);
    }
  return (buffer);
}

/**
 * close_file - function that closes file descriptors.
 * @file_descriptor: file descriptor to be closed.
 */
void close_file(int file_descriptor)
{
  int cclose;
  cclose = close(file_descriptor);
  if (cclose == -1)
    {
      dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_descriptor);
      exit(100);
    }
}
/**
 * main - copies the contents of a file to another file.
 * @argc: number of arguments supplied to the program.
 * @argv: an array of character pointers listing all the arguments.
 *
 * Return: 0 on success.
 */
