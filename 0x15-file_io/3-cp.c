#include "holberton.h"

/**
 * main - program that copies the content of a file in another
 * @argc: count
 * @argv: values
 * Return: int
 */

int main(int argc, char *argv[])
{
	int fsource, fdest, res;

	if (argc != 3 || argv == NULL)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fsource = open(argv[1], O_RDONLY);
	if (fsource == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fdest = open(argv[2],  O_CREAT | O_WRONLY | O_TRUNC | 0664);
	if (fdest == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	res = copyfile(fsource, fdest, argv[1], argv[2]);
	return (res);
}

/**
 * copyfile - program that copies the content of a file in another
 * @fsource: source
 * @fdest: destination
 * @argvs: pointer
 * @argvd: pointer
 * Return: int
 */

int copyfile(int fsource, int fdest, char *argvs, char *argvd)
{
	int func_r, func_w, close_so, close_de;
	char buffer[1024];

	do {
		func_r = read(fsource, buffer, 1024);
		if (func_r == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argvs);
			exit(98);
		}
		func_w = write(fdest, buffer, func_r);
		if (func_w != func_r || func_w == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argvd);
			exit(99);
		}
	} while (func_r == 1024);
	close_so = close(fsource);
	if (close_so == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fsource);
		exit(100);
	}
	close_de = close(fdest);
	if (close_de == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fdest);
		exit(100);
	}
	return (0);
}
