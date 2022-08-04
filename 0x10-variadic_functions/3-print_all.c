#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

/**
 * print_all - A function that prints anything
 * @format: list of argguments passed to the function
 * @...: Other arguments
 * Return: Nothing
 */

void print_all(const char * const format, ...)
{
	va_list ap;
	char *pstr;
	int i = 0;

	va_start(ap, format);
	while (format == NULL)
	{
		printf("\n");
		return;
	}
	while (format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(ap, int));
				break;
			case 'i':
				printf("%i", va_arg(ap, int));
				break;
			case 'f':
				printf("%f", va_arg(ap, double));
				break;
			case 's':
				pstr = va_arg(ap, char *);
				if (pstr != NULL)
				{
					printf("%s", pstr);
					break;
				}
				printf("(nil)");
				break;
		}
		if ((format[i] == 'c' || format[i] == 'i' || format[i] == 'f' ||
					format[i] == 's') && format[i + 1] != '\0')
			printf(", ");
		i++;
	}
	va_end(ap);
	printf("\n");
}
