#include "main.h"
/**
* print_alphabet - prints alphabets in lower case
*
* Return: nothing
*/

void print_alphabet(void)
{
	char lowercase;

	for (lowercase = 'a'; lowercase <= 'z'; lowercase++)
	{
		_putchar(lowercase);
	}
	_putchar('\n');
}
