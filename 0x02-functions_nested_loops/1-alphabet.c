#include "main.h"

/**
 * print _alphabet - print al alphabet in lowercase
 *
 * Return: 0 always
 */

void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);

	_putchar('\n');
}
