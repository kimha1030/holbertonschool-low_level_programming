#include "holberton.h"
/**
 * read_textfile - reads a text file and prints it to stdout
 * @filename: pointer
 * @letters: number of letters to print
 * Return: number de letters or (0).
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_des, func_r, func_w;
	char *space;

	file_des = open(filename, O_RDONLY);
	if (filename == NULL)
		return (0);
	if (file_des == -1)
		return (0);
	space = malloc(letters * sizeof(char));
	if (space == NULL)
		return (0);
	func_r = read(file_des, space, letters);
	if (func_r == -1)
	{
		free(space);
		return (0);
	}
	func_w = write(STDOUT_FILENO, space, func_r);
	if (func_w == -1)
	{
		free(space);
		return (0);
	}
	free(space);
	close(file_des);
	return (func_w);
}
