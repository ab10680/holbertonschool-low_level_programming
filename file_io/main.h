#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

/* Function Prototypes */
int open_source(char *file);
int open_dest(char *file);
void copy_content(int fd_from, int fd_to, char *src, char *dest);
void close_fd(int fd);

#endif /* MAIN_H */
