#include "main.h"

/**
 * read_textfile - reads a text file and prints the letters
 * @filename: filename.
 * @letters: numbers of letters printed.
 * Return: numbers of letters printed. It fails, returns 0.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int j;
	ssize_t n, r;
	char *f;

	if (!filename)
		return (0);
	j = open(filename, O_RDONLY);
	if (j == -1)
		return (0);

	f = malloc(sizeof(char) * (letters));
	if (!f)
		return (0);
	n = read(j, f, letters);
	r = write(STDOUT_FILENO, f, n);
	close(j);
	free(f);
	return (r);
}
