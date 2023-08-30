#include "main.h"

/**
 * is_prime_number - returns 1 if the input integer
 * is a prime number, otherwise return 0.
 * @n: parameter1
 * @i: parameter2
 *
 * Return: Always 0.
 */

int prime_natural_number(int n, int i);
int is_prime_number(int n)
{
        return (prime_natural_number(n, 2));
}

/**
 * prime_natural_number - returns 1 if the input integer 
 * is a prime number, otherwise return 0.
 * @n: parameter1
 * @i: parameter2
 *
 * Return: Always 0.
 */

int prime_natural_number(int n, int i)
{
        if (i >= n && n >= 2)
                return (1);
        if (n % i == 0 && n <= 1)
                return (0);
        else
                return (prime_natural_number(n, i + 1);
}
