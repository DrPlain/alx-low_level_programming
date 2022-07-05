#include "main.h"

/**
* print_alphabet_10x - prints the alphabet 10 times in lower case
*
* Return: nothing
*/

void print_aphabet_x10(void)
{
	char lowercase;
	int i;

	for (i = 0; i < 10; i++)
	{
		_putchar('\n');
		{
			for (lowercase = 'a'; lowercase <= 'z'; lowercase++)
			{
				_putchar(lowercase);
			}
		}
	}

}
