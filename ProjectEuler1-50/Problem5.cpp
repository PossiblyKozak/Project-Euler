/*
Alex Kozak
February 26th 2018

2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.

What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?

*/

#include "Solutions.h"
#include "stdafx.h"
#include "math.h"

bool isClean(int value)
{
	bool clean = true;
	for (int i = 11; i <= 20; i++)
	{
		if (value % i != 0)
		{
			clean = false;
			break;
		}
	}
	return clean;
}

int Problem5()
{
	int answer = 20;

	while (!isClean(answer))
		answer += 20;

	return answer;
}