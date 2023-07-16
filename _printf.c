#include "main.h"
#include <limits.h>
#include <stdio.h>
int checkFormat(char tempc, va_list list);
/**
 * _printf - Prints the values given with a separator
 * @format: The value to be printed
 *
 * Return: Returns the number of characters printed or -1
 */
int _printf(const char * const format, ...)
{
	va_list list;
	int i, cprinted;
	char tempc;

	i = 0; cprinted = 0;
		
	if (format == NULL)
			
		return (-1);
	
	va_list(list, format);
	
	while (format && format[i])
	{
		tempc = format[i];
		if (tempc == '%')
		{
			i++;
			tempc = format[i];
			if (tempc == '\0')
				return (-1);
			cprinted = cprinted + checkFormat(tempc, list);
		}
		else
			cprinted = cprinted + print_char2(format[i]);
		i++;
	}
	va_end(list);
	return (cprinted);
	
}
