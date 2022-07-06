#ifndef printf
#define printf

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include <float.h>
#include <stdint.h>
#include <wchar.h>
#include <signal.h>
#include <locale.h>
#include <ctype.h>
#include <limits.h>
#include <threads.h>

int _putchar(char c);
void _strln(int);
char _strcpy(void);
int _printf(const char *format, ...);
int _specs(char nxt, va_list arg);

#endif
