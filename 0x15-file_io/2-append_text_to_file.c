#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: A pointer to the name of the file.
 * @text_content: The string to add to the end of the file.
 *
 * Return: If the function fails or filename is NULL - -1.
 *         If the file does not exist the user lacks write permissions - -1.
 *         Otherwise - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, len = 0;
	/* Check if filename is NULL */
	if (filename == NULL)
		return (-1);
	/* If text_content is not NULL, get its length */
	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}
	 /* Open file for writing and appending */
	o = open(filename, O_WRONLY | O_APPEND);
	/* Write text_content to the end of the file */
	w = write(o, text_content, len);
	/* If open or write failed, return -1 */
	if (o == -1 || w == -1)
		return (-1);
	/* Close the file */
	close(o);
	/* Return 1 on success */
	return (1);
}
