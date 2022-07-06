#include "main.h"

/**
 * charsFormats - parameter of printf
 * @format: list of args
 * @args: listing
 * Return value of print
 */
int charsFormats(const char * format, va_list args) {
    int i, j, chars, r_val;

    specifier f_list[] = {
      {
        "c",
        _char
      },
      {
        "s",
        _string
      },
      {
        "%",
        _percent
      },
      {
        "d",
        _integer
      },
      {
        "i",
        _integer
      }
    };
    chars = 0;
    for (i = 0; format[i] != '\0'; i++) {
      if (format[i] == '%') {
        for (j = 0; f_list[j].sym != NULL; j++) {
          r_val = f_list[j].f(args);
          if (r_val == -1)
            return (-1);
          chars += r_val;
          break;
        }
      }
      return (0);
    }