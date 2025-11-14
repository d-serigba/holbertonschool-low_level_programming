#include "main.h"
#include <stdlib.h>

/**
 * _isdigit - checks if a string consists only of digits
 * @s: string
 *
 * Return: 1 if all digits, 0 otherwise
 */
int _isdigit(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] < '0' || s[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

/**
 * _strlen - returns length of a string
 * @s: string
 *
 * Return: integer length
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	return (i);
}

/**
 * print_number - prints a number stored as digits in an array
 * @num: array of digits
 * @len: length of array
 *
 * Return: void
 */
void print_number(int *num, int len)
{
	int i = 0, leading_zero = 1;

	while (i < len)
	{
		if (num[i] != 0)
			leading_zero = 0;
		if (!leading_zero)
			_putchar(num[i] + '0');
		i++;
	}

	if (leading_zero)
		_putchar('0');

	_putchar('\n');
}

/**
 * main - multiplies two positive numbers
 * @argc: number of arguments
 * @argv: arguments
 *
 * Return: 0 on success, 98 on error
 */
int main(int argc, char *argv[])
{
	char *s1, *s2;
	int len1, len2, lenR, i, j, carry;
	int *result;

	if (argc != 3 || !_isdigit(argv[1]) || !_isdigit(argv[2]))
	{
		_putchar('E');
		_putchar('r');
		_putchar('r');
		_putchar('o');
		_putchar('r');
		_putchar('\n');
		exit(98);
	}

	s1 = argv[1];
	s2 = argv[2];
	len1 = _strlen(s1);
	len2 = _strlen(s2);
	lenR = len1 + len2;

	result = malloc(sizeof(int) * lenR);
	if (!result)
		return (1);

	for (i = 0; i < lenR; i++)
		result[i] = 0;

	for (i = len1 - 1; i >= 0; i--)
	{
		carry = 0;
		for (j = len2 - 1; j >= 0; j--)
		{
			int prod = (s1[i] - '0') * (s2[j] - '0') +
				result[i + j + 1] + carry;

			result[i + j + 1] = prod % 10;
			carry = prod / 10;
		}
		result[i + j + 1] += carry;
	}

	print_number(result, lenR);
	free(result);

	return (0);
}
