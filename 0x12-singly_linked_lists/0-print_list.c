#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a linked list
 * @h: pointer to the list_t list
 *
 * Return: the length of the list
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
	if (h->str == NULL)
	{
		_putchar('[');
		_putchar('0');
		_putchar(']');
		_putchar(' ');
		_putchar('(');
		_putchar('n');
		_putchar('i');
		_putchar('l');
		_putchar(')');
		_putchar('\n');
	}
	else
	{
		size_t len = h->len;
		const char *str = h->str;

		_putchar('[');
		_putchar(len + '0');
		_putchar(']');
		_putchar(' ');

		while (*str)
		{
			_putchar(*str);
			str++;
		}
		_putchar('\n');
	}

	h = h->next;
	count++;
	}
	return (count);
}
