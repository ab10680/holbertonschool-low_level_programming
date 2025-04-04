#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_file - Creates a file and writes text content to it.
 * @filename: The name of the file to create.
 * @text_content: The NULL terminated string to write to the file.
 *
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
int fd; /* file descriptor for the created file */
ssize_t bytesWritten; /* variable for the number of bytes written */
size_t length = 0; /* length of the text_content string */
/* Check if the filename is NULL */
if (filename == NULL)
return (-1); /* Return -1 if the filename is NULL */
/* Open the file with write and create flags, truncate if exists */
fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
if (fd == -1)
return (-1); /* Return -1 if the file cannot be created */
/* If text_content is NULL, create an empty file */
if (text_content != NULL)
{
/* Calculate the length of text_content */
while (text_content[length] != '\0')
length++;
/* Write the content to the file */
bytesWritten = write(fd, text_content, length);
/* Check if write failed or did not write the expected number of bytes */
if (bytesWritten == -1 || (size_t)bytesWritten != length)
{
close(fd); /* Close the file on write failure */
return (-1); /* Return -1 on write failure */
}
}
/* Close the file descriptor */
close(fd);
return (1); /* Return 1 on success */
}
