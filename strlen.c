#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: Pointer to string
 * Return: zero(x)the string.
 */
int _strlen(char * s) {
  int x = 0;

  for (x = 0; s[x] != '\0'; x++); {
    s++;
  }
  return (x);
}