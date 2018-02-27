/*
Alex Kozak
February 26th 2018

The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.

Find the sum of all the primes below two million.

*/

#include "Solutions.h"
#include "stdafx.h"

double Problem10()
{
	bool isPrime(long long num);
	double answer = 2;

	for (int i = 3; i <= 2000000; i += 2)
	{
		if (isPrime(i))
			answer += i;
	}

	return answer;
}