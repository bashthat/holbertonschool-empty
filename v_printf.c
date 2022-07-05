#include "main.h"


char *
int my_printf(const char *format, ...)
{
    va_list ap;
    int ret;
    int size = 100;
    char *p, *np;

    va_start(ap, format);
    if (useFile) ret = vfprintf(pf, format, ap);
    else ret = vprintf(format, ap);
    va_end(ap);
    
if ((p = malloc(size)) == NULL)
      return NULL;


    return ret;
}
