#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
/**
 * read_textfile - it reads a text file and prints it
 * to the Standard output
 * @filename: the path
 * @letters: number to letters to read and write
 * Return: 0 if 'filename is NULL or number of bytes
 * used to call the write
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	int fd;
	ssize_t r, w;

	if (filename == NULL)
	return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);
	fd = open(filename, O_RDWR);
	if (fd == -1)
	{
		free(buffer);
		return (0);
	}
	r = read(fd, buffer, letters);
	if (r == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	close(fd);
	w = write(STDOUT_FILENO, buffer, r);
	if (w == -1)
	{
		free(buffer);
		return (0);
	}
	if (w != r)
		return (0);
	return (r);
}
