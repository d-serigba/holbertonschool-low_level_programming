#include <stdlib.h>

/**
 * count_words - counts the number of words in a string
 * @str: input string
 *
 * Return: number of words
 */
int count_words(char *str)
{
    int count = 0, i = 0;

    while (str[i])
    {
        /* Skip spaces */
        while (str[i] && str[i] == ' ')
            i++;

        if (str[i] && str[i] != ' ')
        {
            count++;
            /* Move to the end of the word */
            while (str[i] && str[i] != ' ')
                i++;
        }
    }

    return (count);
}

/**
 * strtow - splits a string into words
 * @str: string to split
 *
 * Return: pointer to an array of strings (words), or NULL on failure
 */
char **strtow(char *str)
{
    char **words;
    int i = 0, j, k, len, word_count;

    if (str == NULL || *str == '\0')
        return (NULL);

    word_count = count_words(str);
    if (word_count == 0)
        return (NULL);

    /* Allocate memory for array of string pointers (+1 for NULL terminator) */
    words = malloc(sizeof(char *) * (word_count + 1));
    if (words == NULL)
        return (NULL);

    i = 0;
    k = 0;

    while (str[i])
    {
        /* Skip spaces */
        while (str[i] && str[i] == ' ')
            i++;

        if (str[i] && str[i] != ' ')
        {
            j = i;
            len = 0;

            /* Find word length */
            while (str[j] && str[j] != ' ')
            {
                len++;
                j++;
            }

            /* Allocate memory for the word (+1 for null terminator) */
            words[k] = malloc(sizeof(char) * (len + 1));
            if (words[k] == NULL)
            {
                /* Free previously allocated memory on failure */
                while (k > 0)
                    free(words[--k]);
                free(words);
                return (NULL);
            }

            /* Copy word */
            for (j = 0; j < len; j++, i++)
                words[k][j] = str[i];
            words[k][j] = '\0';

            k++;
        }
    }

    words[k] = NULL; /* Null-terminate the array */
    return (words);
}
