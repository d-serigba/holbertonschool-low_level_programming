#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of the program
 * @ac: argument count
 * @av: argument vector (array of strings)
 *
 * Return: pointer to a new string containing all arguments separated by '\n',
 *         or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
    char *str;
    int i, j, k, total_len = 0;

    if (ac == 0 || av == NULL)
        return (NULL);

    /* Calculate total length needed */
    for (i = 0; i < ac; i++)
    {
        j = 0;
        while (av[i][j])
        {
            total_len++;
            j++;
        }
        total_len++; /* For the '\n' after each argument */
    }

    /* Allocate memory (+1 for null terminator) */
    str = malloc(sizeof(char) * (total_len + 1));
    if (str == NULL)
        return (NULL);

    /* Copy arguments into the new string */
    k = 0;
    for (i = 0; i < ac; i++)
    {
        j = 0;
        while (av[i][j])
        {
            str[k++] = av[i][j];
            j++;
        }
        str[k++] = '\n'; /* Add newline after each argument */
    }

    str[k] = '\0'; /* Null terminate the string */

    return (str);
}
