#include "main.h"

/**
  * read_textfile - Read from text file
  * @filename: Source file
  * @letters: Number of letters to reads and prints
  *
  * Return: read file
  */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, readf;
	char *buff = malloc(sizeof(char *) * letters);

	if (!buff)
		return (0);

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY, 0600);
	if (fd == -1)
		return (0);

	readf = read(fd, buff, letters);
	write(STDOUT_FILENO, buff, readf);

	free(buff);
	close(fd);
	return (readf);
}
