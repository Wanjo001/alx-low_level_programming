#include "main.h"

/**
 * main - print alphabet 10 times
 *
 * Return: void
 */

int main(void)
{
	int round = 0;
	char letter = 'a';

	while (round < 10)
	{
		letter = 'a';
		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}
		_putchar('\n');

		round++;
	}

	return (0);
}
