#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include <limits.h>
#include <stdio.h>

int run_printf(const char *format, va_list args);
int _printf(const char *format, ...);
int _putchar(char c);

#endif
