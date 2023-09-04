#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>


/**
 * read_textfile - Read a text file and print it to the POSIX standard output
 * @filename: The name of the file to be printed
 * @letters: The number of letters to read and print from the file
 *
 * Return: The actual number of letters it could read and print
 *	   0 - if the file can not be opened, read, or if
 *	   filename is NULL, or if write fails or does not
 *	   write the expected amount of bytes
 */
ssize_t read_textfile(const char *filename, size_t letters);

/**
 * create_file - Create a text file
 * @filename: The name of the file to create
 * @text_content: A NULL terminated string to write to the file
 *
 * Return: 1 - On success
 *	  -1 - On failure (If filename is NULL,file can not be created,
 *	  file can not be written,write “fails”, etc…)
 */
int create_file(const char *filename, char *text_content);

#endif /* MAIN_H */
