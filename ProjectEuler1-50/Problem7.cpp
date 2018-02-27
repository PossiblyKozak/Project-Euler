/*
Alex Kozak
February 26th 2018

By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.

What is the 10 001st prime number?

*/

#include "Solutions.h"
#include "stdafx.h"
#include "math.h"

int Problem7()
{
	bool isPrime(long long num);
	long long answer = 3;
	int count = 2;

	while (count <= 10000)
	{
		answer += 1;
		if (answer % 2 != 0 && answer % 3 != 0)
		{
			if (isPrime(answer))
			{
				count++;
			}
		}
	}


	return answer;
}