#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - prints anything
 * @format: list of argument types
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
    va_list ap;
    int i = 0;
    char *str;
    char sep = 0;

    va_start(ap, format);

    while (format && format[i])
    {
        switch (format[i])
        {
            case 'c':
                if (sep)
                    printf(", ");
                printf("%c", va_arg(ap, int));
                sep = 1;
                break;

            case 'i':
                if (sep)
                    printf(", ");
                printf("%d", va_arg(ap, int));
                sep = 1;
                break;

            case 'f':
                if (sep)
                    printf(", ");
                printf("%f", (float)va_arg(ap, double));
                sep = 1;
                break;

            case 's':
                if (sep)
                    printf(", ");
                str = va_arg(ap, char *);
                if (str == NULL)
                    printf("(nil)");
                else
                    printf("%s", str);
                sep = 1;
                break;
        }
        i++;
    }

    va_end(ap);
    printf("\n");
}
