#include "main.h"
/**
 * _strcpy - copys the string
 * @src: start
 * @dest: return
 * Return: always zero
 */
char *_strcpy(char *dest, char *src)
{
	int x = 0;

	while (src[x])
	{
		*(dest + x) = *(src + x);
		x++;
	}
	dest[x] = '\0';
	return (dest);
}
