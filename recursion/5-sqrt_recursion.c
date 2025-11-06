#include "main.h"

/**
 * _sqrt_helper - Helper to find the natural square root recursively
 * @n: Number to find the square root of
 * @i: Possible square root
 *
 * Return: The square root or -1 if not found
 */
int _sqrt_helper(int n, int i)
{
	if (i * i == n)
		return (i);
	if (i * i > n)
		return (-1);

	return (_sqrt_helper(n, i + 1));
}

/**
 * _sqrt_recursion - Returns the natural square root of a number
 * @n: Number to find the square root of
 *
 * Return: Natural square root or -1 if none
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt_helper(n, 0));
}
