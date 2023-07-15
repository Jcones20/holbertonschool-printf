#include "main.h"

/**
 * _printf - Prints the values given with a function
 * Description: 
 * @format: The value to be printed
 *
 * Return:Returns the number of characters printed or -1
 */
int _printf(const char *format, ...)
{
	va_list list;
	int i, counter;
	char tempc;

	i = 0, counter;
		if (format == NULL)
			return (-1);
	va_start(list, format[i])
	while (format && format[i])
	{
		tempc = format[i];
		if (tempc == '%')
		{
			i++;
			tempc = format[i];
			if (tempc == '\0')
				return (-1);
			counter = counter + checkFormat(tempc, list);
		}
		else
			cprinted = cprinted + print_char2(format[i]);
		i++;
	}
	va_end(list);
	return (counter);
	
}
