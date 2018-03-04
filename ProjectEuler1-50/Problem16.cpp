/*
Alex Kozak
March 4th 2018

2^15 = 32768 and the sum of its digits is 3 + 2 + 7 + 6 + 8 = 26.

What is the sum of the digits of the number 2^1000?

*/

#include "Solutions.h"
#include "stdafx.h"
#include "math.h"

static int check[1000] = { 0 };

int powArray(int power)
{		
	int answer = 0;

	for (int i = 0; i < 1000; i++)
	{
		check[i] = 0;
	}
	check[999] = 1;	

	for (int i = 0; i < power; i++)
	{
		for (int j = 999; j >= 0; j--)
		{
			check[j] *= 2;
		}
		for (int j = 999; j >= 0; j--)
		{
			if (check[j] >= 10)
			{
				check[j] = check[j] - 10;
				check[j - 1]++;
			}
		}
	}
	for (int i = 0; i < 1000; i++)
	{
		answer += check[i];			
	}
	return answer;
}

int Problem16()
{	
	int answer = 0;

	answer = powArray(1000);

	return answer;
}