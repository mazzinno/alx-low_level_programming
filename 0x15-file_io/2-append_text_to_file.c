#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * append_text_to_file - appends text
 * @filename: file
 * @text_content: text
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, tsize;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_APPEND | O_WRONLY);
	if (fd == -1)
		return (-1);
	for (tsize = 0; text_content && text_content[tsize]; tsize++)
		;
	if (tsize)
	{
		if (write(fd, text_content, tsize) != tsize)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
