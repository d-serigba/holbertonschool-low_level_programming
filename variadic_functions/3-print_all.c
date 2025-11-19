#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - prints anything
 * @format: list of types of arguments
 */
void print_all(const char * const format, ...)
{
    va_list ap;
    int i = 0;
    char *str;
    char c;
    int n;
    float f;
    char *sep = "";

    va_start(ap, format);

    while (format && format[i])
    {
        if (format[i] == 'c' || format[i] == 'i' ||
            format[i] == 'f' || format[i] == 's')
        {
            printf("%s", sep);

            if (format[i] == 'c')
            {
                c = (char) va_arg(ap, int);
                printf("%c", c);
            }
            if (format[i] == 'i')
            {
                n = va_arg(ap, int);
                printf("%d", n);
            }
            if (format[i] == 'f')
            {
                f = (float) va_arg(ap, double);
                printf("%f", f);
            }
            if (format[i] == 's')
            {
                str = va_arg(ap, char *);
                if (str == NULL)
                    str = "(nil)";
                printf("%s", str);
            }

            sep = ", ";
        }
        i++;
    }

    printf("\n");
    va_end(ap);
}
