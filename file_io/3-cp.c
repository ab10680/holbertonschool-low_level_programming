#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * open_source - Opens the source file for reading.
 * @file: The name of the source file.
 * Return: File descriptor on success, exits with code 98 on failure.
 */
int open_source(const char *file)
{
  int fd = open(file, O_RDONLY);

  if (fd < 0)
    {
      dprintf(STDERR_FILENO,
	      "Error: Can't read from file %s\n", file);
      exit(98);
    }
  return (fd);
}

/**
 * open_dest - Opens the destination file for writing.
 * @file: The name of the destination file.
 * Return: File descriptor on success, exits with code 99 on failure.
 */
int open_dest(const char *file)
{
  int fd = open(file, O_CREAT | O_WRONLY | O_TRUNC, 0664);

  if (fd < 0)
    {
      dprintf(STDERR_FILENO,
	      "Error: Can't write to %s\n", file);
      exit(99);
    }
  return (fd);
}

/**
 * copy_content - Copies content from source file to destination file.
 * @fd_from: Source file descriptor.
 * @fd_to: Destination file descriptor.
 * @src: Source file name.
 * @dest: Destination file name.
 */
void copy_content(int fd_from, int fd_to, char *src, char *dest)
{
  char buffer[1024];
  ssize_t rd, wr;

  while ((rd = read(fd_from, buffer, 1024)) > 0)
    {
      wr = write(fd_to, buffer, rd);
      if (wr != rd)
	{
	  dprintf(STDERR_FILENO,
		  "Error: Can't write to %s\n", dest);
	  close_fd(fd_from);
	  close_fd(fd_to);
	  exit(99);
	}
    }

  if (rd < 0)
    {
      dprintf(STDERR_FILENO,
	      "Error: Can't read from file %s\n", src);
      close_fd(fd_from);
      close_fd(fd_to);
      exit(98);
    }
}

/**
 * close_fd - Closes a file descriptor and handles errors.
 * @fd: File descriptor to close.
 */
void close_fd(int fd)
{
  if (close(fd) < 0)
    {
      dprintf(STDERR_FILENO,
	      "Error: Can't close fd %d\n", fd);
      exit(100);
    }
}

/**
 * main - Entry point for the file copy program.
 * @argc: Number of command line arguments.
 * @argv: Array of command line arguments.
 * Return: 0 on success, exits with appropriate code on failure.
 */
int main(int argc, char *argv[])
{
  int fd_from, fd_to;

  if (argc != 3)
    {
      dprintf(STDERR_FILENO,
	      "Usage: cp file_from file_to\n");
      exit(97);
    }

  fd_from = open_source(argv[1]);
  fd_to = open_dest(argv[2]);

  copy_content(fd_from, fd_to, argv[1], argv[2]);

  close_fd(fd_from);
  close_fd(fd_to);

  return (0);
}
