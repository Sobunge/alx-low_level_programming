#include "main.h"
#include <stdlib.h>
#define BUFSIZE 1024

/**
 * read_textfile - Reads and prints a text file to the standard output
 * @filename: The name of the file to read
 * @letters: The number of letters to read and print
 *
 * Return: The actual number of letters read and printed; 0 on failure
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	if (filename == NULL)
		return 0;

	int fd = open(filename, O_RDONLY);
	if (fd == -1)
		return 0;

	char buffer[BUFSIZE];
	ssize_t bytes_read, bytes_written;
	ssize_t total_bytes = 0;

	while (letters > 0) {
		bytes_read = read(fd, buffer, BUFSIZE);
		if (bytes_read == -1) {
			close(fd);
			return 0;
		}

		if (bytes_read == 0)
			break;

		if (letters < bytes_read)
			bytes_read = letters;

		bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
		if (bytes_written == -1 || bytes_written != bytes_read) {
			close(fd);
			return 0;
		}

		letters -= bytes_read;
		total_bytes += bytes_read;
	}

	close(fd);
	return total_bytes;
}
