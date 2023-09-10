#include "main.h"
/**
 * error_wr - detect error in write or read.
 * @fdr: result of open file to read.
 * @fdw: result of open file to write.
 * @file_from: file from copy.
 * @file_to: file to copy.
 */
void error_wr(int fdr, int fdw, char *file_from, char *file_to)
{
	ssize_t r, w;
	char buffer[NBYTES];

	do {
		r = read(fdr, buffer, NBYTES);
		if (r == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
			exit(98);
		}
		if (r)
		{
			w = write(fdw, buffer, r);
			if (w != r)
			{
				dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
				exit(99);
			}
		}
	} while (r);
}
/**
 * main - copy content of one file into another
 * @argc: count
 * @argv: array
 * Return: EXIT_SUCCESS on success or exit with error number.
 */
int main(int argc, char *argv[])
{
	char *file_from, *file_to;
	int fdr, fdw;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = argv[1];
	file_to = argv[2];
	fdr = open(file_from, O_RDONLY);
	if (fdr == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	fdw = open(file_to, O_CREAT | O_TRUNC | O_WRONLY, 0664);
	error_wr(fdr, fdw, file_from, file_to);
	if (fdw == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		exit(99);
	}
	if (close(fdw))
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fdw);
		exit(100);
	}
	if (close(fdr))
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fdr);
		exit(100);
	}
	exit(EXIT_SUCCESS);
}
