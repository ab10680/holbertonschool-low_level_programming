#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - Reads a text file and prints it to POSIX stdout.
 * @filename: The name of the file to read.
 * @letters: The number of letters to read and print.
 *
 * Return: actual number of letters it could read & print, or 0 on failure.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
int fd; /* file descriptor for the opened file */
char *buffer; /* buffer to store the read content */
ssize_t bytesRead, bytesWritten; /* variables for read and write operations */
/* Check if the filename is NULL */
if (filename == NULL)
return (0); /* Return 0 if the filename is NULL */
/* Open the file in read-only mode */
fd = open(filename, O_RDONLY);
if (fd == -1)
return (0); /* Return 0 if the file cannot be opened */
/* Allocate memory for the buffer */
buffer = malloc(sizeof(char) * letters);
if (buffer == NULL)
{
close(fd); /* Close the file if memory allocation fails */
return (0); /* Return 0 on failure */
}
/* Read from the file into the buffer */
bytesRead = read(fd, buffer, letters);
if (bytesRead == -1)
{
free(buffer); /* Free the buffer on read failure */
close(fd); /* Close the file */
return (0); /* Return 0 on failure */
}
/* Write the buffer content to standard output */
bytesWritten = write(STDOUT_FILENO, buffer, bytesRead);
if (bytesWritten == -1 || bytesWritten != bytesRead)
{
free(buffer); /* Free the buffer if write fails */
close(fd); /* Close the file */
return (0); /* Return 0 on failure */
}
/* Free the allocated buffer and close the file */
free(buffer);
close(fd);
return (bytesRead); /* Return the number of letters read */
}
