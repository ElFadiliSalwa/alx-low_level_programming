#include "main.h"

/**
 * read_textfile - reads and prints a text file
 * @filename: file's name
 * @letters: the number of letters to read and print
 *
 * Return: the actual number of letters that could be read and printed
 */
ssize read_textfile(const char *filename, size_t letters)
{
	ssize_t fp, fr, fw;
	char *c;

	if (!filename)
		return (0);

	c = malloc(sizeof(char) * letters);
	if (!c)
		return (0);

	fp = open(filename, O_RDONLY);
	fr = read(fp, c, letters);
	fw = write(STDOUT_FILENO, c, fr);
	if (fp == -1 || fr == -1 || fw == -1)
	{
		free(c);
		return (0);
	}
	free(c);
	close(fp);
	return (fw);
}
