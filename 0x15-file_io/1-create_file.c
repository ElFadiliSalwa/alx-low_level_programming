#include "main.h"

/**
 * create_file - creates a file
 * @filename: points to file's name
 * @text_content: string to write to the file
 *
 * Return: -1 or 1
 */
int create_file(const char *filename, char *text_content)
{
	int fp, fw, txt_len;

	if (!filename)
		return (-1);

	if (text_content)
	{
		for (txt_len = 0; text_content[txt_len]; txt_len++)
		{}
	}
	fp = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	fw = write(fp, text_content, txt_len);
	if (fp == -1 || fw == -1 || fw != txt_len)
		return (-1);

	close(fp);
	return (1);
}
