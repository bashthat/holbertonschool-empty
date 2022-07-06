#include "main.h"

/**
 * _specs - specifiers and functions
 * @arg: the arguments passed through function
 * @nxt: nxt
 * Return: zero
 */
int _specs(char nxt, va_list arg) {
  int vi;

  specifiers[] = {
    {
      "c",
      print_char
    },
    {
      "s",
      print_string
    },
    {
      "d",
      print_int
    },
    {
      "i",
      print_int
    },
    {
      "u",
      print_unsigned
    },
    {
      "b",
      print_binary
    },
    {
      "%",
      print_specifier
    } {
      NULL,
      NULL
    }
  };

  for (vi = 0; specifiers[vi].mod != NULL; vi++) {
    if (specifiers[vi].mod[0] == nxt)
      return (specifiers[vi].f(arg));
  }
  return (0);
}