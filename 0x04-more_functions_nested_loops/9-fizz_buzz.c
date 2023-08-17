#include "main.h"
#include <stdio.h>

/**
 * main - Write a program that prints the numbers from 1 to 100.
 *
 * Return: Always 0.
 */

int main(void)
{
	int num = 1;

	while (num <= 100)
	{
		if (num % 3 == 0 && num % 5 == 0)
			printf("FizzBuzz ");
		else if (num % 5 == 0)
		{
			if (num == 100)
			{
				printf("Buzz");
				printf("\n");
			}
			else
				printf("Buzz ");
		}
		else if (num % 3 == 0)
			printf("Fizz ");
		else
			printf("%i ", num);
	num++;
	}
}
