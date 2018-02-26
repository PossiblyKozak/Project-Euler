/*
Alex Kozak
February 26th 2018

A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.

Find the largest palindrome made from the product of two 3-digit numbers.

*/

#include "Solutions.h"
#include "stdafx.h"
#include "math.h"

bool isPalindrome(int value)
{
	bool isTrue = true;
	int numDigits = log10(value);
	for (int i = 0; i <= floor(numDigits / 2); i++)
	{
		int firstDigit = (value / (int)pow(10, i)) % 10;
		int lastDigit = (value / (int)pow(10, numDigits - i)) % 10;
		if (firstDigit != lastDigit)
		{
			isTrue = false;
			break;
		}
	}
	return isTrue;
}

int Problem4()
{
	int answer = 0;

	for (int i = 1000; i > 100; i--)
	{
		for (int j = 1000; j > 100; j--)
		{
			int palindrome = i * j;
			if (isPalindrome(palindrome))
			{
				if (palindrome > answer)
					answer = palindrome;				
			}
		}
	}

	return answer;
}