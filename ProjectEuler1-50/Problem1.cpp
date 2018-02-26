#include "Solutions.h"
#include "stdafx.h"

void Problem1()
{
	int total = 0;
	for (int i = 0; i < 1000; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			total += i;
		}
	}
	printf("Problem #1: %d\n", total);
}