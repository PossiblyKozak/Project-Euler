/* 
Alex Kozak
March 5th 2018

The Fibonacci sequence is defined by the recurrence relation:

Fn = Fn−1 + Fn−2, where F1 = 1 and F2 = 1.

Hence the first 12 terms will be:

F1 = 1
F2 = 1
F3 = 2
F4 = 3
F5 = 5
F6 = 8
F7 = 13
F8 = 21
F9 = 34
F10 = 55
F11 = 89
F12 = 144

The 12th term, F12, is the first term to contain three digits.

What is the index of the first term in the Fibonacci sequence to contain 1000 digits?

*/

#include "stdafx.h"
#include "math.h"


int Problem25()
{
	int first[1000] = { 0 };
	int second[1000] = { 0 };
	int count = 1;
	first[999] = 1;
	bool displayFirst = false;

	while (first[0] == 0)
	{				
		count++;
		for (int i = 0; i < 1000; i++)
		{
			first[i] = first[i] + second[i];
			second[i] = first[i] - second[i];
		}
		for (int i = 999; i >= 0; i--)
		{
			if (first[i] >= 10)
			{
				first[i - 1]++;
				first[i] -= 10;
			}
			if (second[i] >= 10)
			{
				second[i - 1]++;
				second[i] -= 10;
			}
		}
		displayFirst = false;				
	}
    return count;
}

