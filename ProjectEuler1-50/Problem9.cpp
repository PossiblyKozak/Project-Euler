/*
Alex Kozak
February 26th 2018

A Pythagorean triplet is a set of three natural numbers, a < b < c, for which,
a^2 + b^2 = c^2

For example, 3^2 + 4^2 = 9 + 16 = 25 = 5^2.

There exists exactly one Pythagorean triplet for which a + b + c = 1000.
Find the product abc.

*/

#include "Solutions.h"
#include "stdafx.h"
#include "math.h"

int Problem9()
{
	int answer = 0;
	for (int a = 1; a < 333; a++)
	{
		for (int b = a + 1; b < 499; b++)
		{
			double square = sqrt(pow(a, 2) + pow(b, 2));
			if (square == floor(square) && a + b + floor(square) == 1000)
			{
				answer = a * b * floor(square);
				break;
			}
		}
	}
	return answer;
}