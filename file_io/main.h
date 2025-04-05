#ifndef MAIN_H
#define MAIN_H

int open_source(const char *file);
int open_dest(const char *file);
void copy_content(int fd_from, int fd_to, char *src, char *dest);
void close_fd(int fd);

#endif
