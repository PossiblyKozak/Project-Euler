/*
Alex Kozak
February 26th 2018

The prime factors of 13195 are 5, 7, 13 and 29.

What is the largest prime factor of the number 600851475143 ?

*/

#include "Solutions.h"
#include "stdafx.h"
#include "math.h"

bool isPrime(long long num)
{
	bool prime = true;

	for (long i = floorl(sqrtl(num)); i > 1; i--)
	{
		if (num % i == 0)
		{
			prime = false;
			break;
		}
	}
	return prime;
}

double Problem3()
{
	double answer = 0;
	
	for (double i = floorl(sqrtl(600851475143)); i > 0; i--)
	{		
		if (600851475143 % (int)i == 0)
		{				
			double factor2 = (600851475143 / i);
			if (isPrime(i))
			{				
				if (i > answer)
					answer = i;				
			}
			if (isPrime(factor2))
			{				
				if (factor2 > answer)
					answer = factor2;
			}
		}
	}

	return answer;
}