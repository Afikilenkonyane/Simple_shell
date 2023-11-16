#include "shell.h"

/**
 * _eputs - Prints input str
 * @str: string printed
 *
 * Return: to zero
 */
void _eputs(char *str)
{
	int i = 0;

	if (!str)
		return;
	while (str[i] != '\0')
	{
		_eputchar(str[i]);
		i++;
	}
}

/**
 * _putsfd - Print input str
 * @str: str printed
 * @fd: Filedescriptor
 *
 * Return: return to char
 */
int _putsfd(char *str, int fd)
{
	int i = 0;

	if (!str)
		return (0);
	while (*str)
	{
		i += _putfd(*str++, fd);
	}
	return (i);
}

/**
 * _putfd - character
 * @c: print char
 * @fd: filedescriptor
 *
 * Return: return success 1.
 * error. errno is set appropriately and -1 returned,
 */
int _putfd(char c, int fd)
{
	static int i;
	static char buf[WRITE_BUF_SIZE];

	if (c == BUF_FLUSH || i >= WRITE_BUF_SIZE)
	{
		write(fd, buf, i);
		i = 0;
	}
	if (c != BUF_FLUSH)
		buf[i++] = c;
	return (1);
}

/**
 * _eputchar - Char to stderr
 * @c: print Char
 *
 * Return: On success 1.
 * On error. errno is set appropriately. and return -1
 */
int _eputchar(char c)
{
	static int i;
	static char buf[WRITE_BUF_SIZE];

	if (c == BUF_FLUSH || i >= WRITE_BUF_SIZE)
	{
		write(2, buf, i);
		i = 0;
	}
	if (c != BUF_FLUSH)
		buf[i++] = c;
	return (1);
}


