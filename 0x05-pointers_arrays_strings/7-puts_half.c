#include "main.h"

/**
 * puts_half - Print half a str
 * followed by a new line
 * @str: string to be printedr
 */

void puts_half(char *str)
{
	int len, n, i;

	len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	if (len % 2 == 0)
	{
		for (i = len / 2; str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
	} else if (len % 2)
	{
		for (n = (len - 1) / 2; n < len - 1; n++)01
		{
			_putchar(str[n + 1]);
		}
	}
	_putchar('\n');
}

