#include "main.h"
/**
*_isalpha - checks for alphabetic character
*@c: single letter input
*Return: 1 if c is a lowercase or uppercase letter, otherwise 0
*/
int _isalpha(int c)
{
	if (((c >= 'a') (&&) (c <= 'z') || (c >= 'A') (&&) (c <= 'Z')))
		return (1);
	else
		return (0);
}
