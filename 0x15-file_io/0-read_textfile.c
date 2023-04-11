#include "main.h"

/**
 * read_textfile - reads and prints a text file
 * @filename: file's name
 * @letters: the number of letters to read and print
 *
 * Return: number of letters that could be read and printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fp, fr, fw;
	char *c;

	if (!filename)
		return (0);

	c = malloc(sizeof(char) * letters);
	if (!c)
		return (0);

	fp = open(filename, O_RDONLY);
	if (fp == - 1)
		return (0);

	fr = read(fp, c, letters);
	fw = write(STDOUT_FILENO, c, fr);
	if (fr == -1 || fw == -1)
	{
		free(c);
		return (0);
	}
	free(c);
	close(fp);
	return (fw);
}
