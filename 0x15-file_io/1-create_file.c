#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
/**
 * create_file - create a file
 * @filename: path
 * @text_content: content to insert into file
 * Return: 1 on success, -1 if error occurs
 */
int create_file(const char *filename, char *text_content)
{
	ssize_t i = 0;
	ssize_t x = 0;
	int fd;

	if (filename == NULL)
		return (-1);
	for (i = 0; text_content && text_content[i]; i++)
		;
	fd = open(filename, O_CREAT | O_TRUNC | O_WRONLY, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);
	if (i)
		x = write(fd, text_content, i);
	if (x == -1)
		return (-1);
	close(fd);
	return (1);
}
