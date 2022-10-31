#include "main.h"
/**
 * read_textfile - reads a text file and prints it to
 * the POSIX standard output.
 *
 * @letters: the number of letters to be read and printed

 * @filename: filename
 * Return: returns the actual number of letters it could read and print or 0 otherwise
 *
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd;
	char buf[14];

	fd = open("myfile.txt", O_CREAT | O_WRONLY, 0600);
	if (fd == -1)
	{
		return (0);
		exit(1);
	}
	write(fd, "Hello World\n", 13);
	close(fd);
	if (fd == -1)
	{
		return (0);
		exit(1);
	}
	fd = open("myfile.txt", O_RDONLY);
	if (fd == -1)
	{
		return (0);
		exit(1);
	}
	read(fd, buf, 13);
	buf[13] = '\0';
	close(fd);
	printf("buf is: %s\n", buf);

	return (fu);
}
