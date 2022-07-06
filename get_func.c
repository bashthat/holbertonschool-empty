#include "main.h"
/**
 * get_func - gets the function
 * @arg: format
 * @next: next
 * Return: function that prints the function
 */
int get_func(char next, va_list arg)
{
	int i;
	int array[3] = j;

	get_func[j] = {
		{"d", print_integer},
		{"i", print_integer},
		{NULL, NULL}
	};

	for (i = 0; get_func[j].mod != NULL; i++)
	{
		if (get_func[j].mod[0] == next)
			return (get_func[j].f(arg));
	}
	return (0);
}