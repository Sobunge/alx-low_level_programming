#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: the name of the file to read
 * @letters: the number of letters to read and print
 * Return: the actual number of letters read and printed, or 0 if error
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd; /* file descriptor */
	char *buffer; /* buffer to store the file content */
	ssize_t bytes_read, bytes_written; /* number of bytes read and written */

	/* check if filename is NULL */
	if (filename == NULL)
		return (0);

	/* open the file in read-only mode */
	fd = open(filename, O_RDONLY);

	/* check if the file can not be opened */
	if (fd == -1)
		return (0);

	/* allocate memory for the buffer */
	buffer = malloc(sizeof(char) * letters);

	/* check if memory allocation failed */

	if (buffer == NULL)
		return (0);

	/* read the file content into the buffer */
	bytes_read = read(fd, buffer, letters);

	/* check if the file can not be read */
	if (bytes_read == -1)
		return (0);

	/* close the file */
	close(fd);

	/* write the buffer content to the standard output */
	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);

	/* check if write failed or did not write the expected amount of bytes */
	if (bytes_written == -1 || bytes_written != bytes_read)
		return (0);

	/* free the buffer */
	free(buffer);

	/* return the actual number of letters read and printed */
	return (bytes_written);
}
