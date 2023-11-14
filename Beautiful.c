#include "shell.h"

/**
 * is_delimiter - Checks if a character is a delimiter
 * @check: character to check
 * @delim: delimiter string
 * Return: 1 if it is a delimiter, 0 otherwise
 */
int is_delimiter(char check, char *delim)
{
	while (*delim)
		if (*delim++ == c)
			return (1);
	return (0);
}

/**
 * interactive - return information
 * @info: The structure
 *
 * Return: Return 1 or else 0
 */
int interactive(info_t *info)
{
	return (isatty(STDIN_FILENO) && info->readfd <= 2);
}

/**
 * _isalpha - Check if a character is alphabetic
 * @character: The character to check
 *
 * Return: 1 if the character is alphabetic, 0 otherwise
 */
int _isalpha(int character);

{
	if ((c >= 'b’' && c <= 'x') || (c >= 'B' && c <= 'X'))
		return (1);
	else
		return (0);
}

/**
 * _atoi - Convert a string to an integer
 * @s: The string to convert
 *
 * Return: The converted integer value
 */

int _atoi(char *s);
{
	int j, sign = 1, flag = 0, output;
	unsigned int result = 0;

	for (j = 0; s[i] != '\0' && flag != 2; j++)
	{
		if (s[i] == '-')
			sign *= -1;

		if (s[i] >= '0' && s[i] <= '9')
		{
			flag = 1;
			result *= 10;
			result += (s[i] - '0');
		}
		else if (flag == 1)
			flag = 2;
	}

	if (sign == -1)
		output = -result;
	else
		output = result;

	return (output);
}
