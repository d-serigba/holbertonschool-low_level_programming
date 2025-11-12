#include <stdlib.h>

/**
 * _strdup - Returns a pointer to a newly allocated space in memory
 *           containing a copy of the string given as parameter
 * @str: The string to duplicate
 *
 * Return: Pointer to the duplicated string, or NULL if str is NULL
 *         or if insufficient memory was available
 */
char *_strdup(char *str)
{
    char *duplicate;
    unsigned int i, length;

    /* Return NULL if str is NULL */
    if (str == NULL)
        return (NULL);

    /* Calculate the length of the string */
    length = 0;
    while (str[length] != '\0')
    {
        length++;
    }

    /* Allocate memory for the duplicate (length + 1 for null terminator) */
    duplicate = malloc((length + 1) * sizeof(char));

    /* Check if malloc failed */
    if (duplicate == NULL)
        return (NULL);

    /* Copy the string */
    for (i = 0; i <= length; i++)
    {
        duplicate[i] = str[i];
    }

    return (duplicate);
}
