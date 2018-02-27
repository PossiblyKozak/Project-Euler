/*
Alex Kozak
February 26th 2018

The following iterative sequence is defined for the set of positive integers:

n → n/2 (n is even)
n → 3n + 1 (n is odd)

Using the rule above and starting with 13, we generate the following sequence:
13 → 40 → 20 → 10 → 5 → 16 → 8 → 4 → 2 → 1

It can be seen that this sequence (starting at 13 and finishing at 1) contains 10 terms. Although it has not been proved yet (Collatz Problem), it is thought that all starting numbers finish at 1.

Which starting number, under one million, produces the longest chain?

NOTE: Once the chain starts the terms are allowed to go above one million.

*/

#include "Solutions.h"
#include "stdafx.h"
#include "math.h"

int Problem14()
{
	int answer = 0;
	double result = 0;
	int tempIterations = 0;
	int finalIterations = 0;

	for (int i = 2; i <= 1000000; i++)
	{
		result = i;
		tempIterations = 0;
		while (result != 1)
		{
			if (result / 2 == floor(result/2))
			{
				result = result / 2;
			}
			else
			{
				result = (3 * result) + 1;
			}
			tempIterations++;
		}
		if (tempIterations > finalIterations)
		{
			finalIterations = tempIterations;
			answer = i;
			//printf("%d --> %d\n", i, tempIterations);
		}
	}

	return answer;
}