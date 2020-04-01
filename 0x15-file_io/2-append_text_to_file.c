#include "holberton.h"
/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: pointer.
 * @text_content: second argument.
 * Return: 1 (sucess) or -1 (fail).
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file_des, func_w, i;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		text_content = "";
	file_des = open(filename, O_APPEND | O_WRONLY);
	if (file_des == -1)
		return (file_des);
	for (i = 0; text_content[i] != '\0'; i++)
	{
	}
	func_w = write(file_des, text_content, i);
	if (func_w == -1)
	{
		return (-1);
	}
	close(file_des);
	return (1);
}
