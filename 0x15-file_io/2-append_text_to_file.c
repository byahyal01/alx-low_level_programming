#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 *
 * @filename: The name of the file to append to.
 * @text_content: The text to append to the file.
 *
 * Return: 1 on success, or -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_desc, write_count, text_length = 0;

	if (!filename)
		return (-1);

	if (text_content)
	{
		while (text_content[text_length])
			text_length++;
	}

	file_desc = open(filename, O_WRONLY | O_APPEND);
	if (file_desc == -1)
		return (-1);

	write_count = write(file_desc, text_content, text_length);
	if (write_count == -1 || write_count != text_length)
	{
		close(file_desc);
		return (-1);
	}

	close(file_desc);
	return (1);
}

