#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: points to file's name
 * @text_content: points to string to add
 *
 * Return: -1 or 1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fp, fw, txt_len = 0;

	if (!filename)
		return (-1);

	if (text_content)
	{
		for (txt_len = 0; text_content[txt_len]; txt_len++)
		{}
	}
	fp = open(filename, O_WRONLY | O_APPEND);
	fw = write(fp, text_content, txt_len);
	if (fp == -1 || fw == -1)
		return (-1);

	close(fp);
	return (1);
}
