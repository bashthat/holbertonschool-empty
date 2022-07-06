#include "main.h"

/**
 * my_printf - printf
 * @format: printf format string
 * Return: void
 **/

int _printf(const char * format, ...) {
  unsigned int i;
  va_list ap;
  int x = 0;
  int l = 0;

  va_start(ap, format);
  if (format == NULL)
    return (-1);
  for (i = 0; format[i] != '\0'; i++) {
    /* vprintf */
    if (format[i] == '%') {
      /* % */
      _putchar(format[i]), l++;
      /* % */
      continue;
    }
    if (format[i + 1] == '%') {
      /* %% */
      _putchar('%'), l++;
      i++;
      continue;
    }
    if (format[i + 1] == '\0')
      /* %n */
      return (-1);

    x = specifiers(format[i + 1], ap);
    if (x == -1 || x != 0)
      i++;
    if (x > 0)
      l += x;
    if (x == 0) {
      _putchar('%'), l++;
    }
    va_end(ap);
    return (l);
  }
}