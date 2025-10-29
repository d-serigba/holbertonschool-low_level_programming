#include <stdio.h>

/**
 * _strlen - flemme
 * @s: a
 * Return: nothing
 */

int _strlen(char *s)
{
int length = 0;

while (s[length] != '\0')
{
length++;
}

return (length);
}
