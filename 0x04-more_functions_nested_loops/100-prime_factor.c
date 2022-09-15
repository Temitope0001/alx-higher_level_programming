#include <stdio.h>
#include <math.h>
/**
*main - program that finds larget prime factor
*Return: always 0
*/
int main(void)
{
	long int num = 612852475143;
	int prime;

	for(prime = 2; prime <= sqrt(num); prime++)
	{
		if (num % prime == 0)
		{
			num = num / prime;
			prime = 1;
		}
	}
	printf("%ld\n", num);
	return (0);
}
