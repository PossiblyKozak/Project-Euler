#include "Solutions.h"
#include "stdafx.h"

void Problem2()
{
	int fibOld = 1;
	int fibNew = 1;
	int fibTotal = 1;

	int countTotal = 0;
	while (fibTotal < 4000000)
	{
		fibNew = fibTotal;
		fibTotal = fibOld + fibNew;
		fibOld = fibNew;
		if (fibTotal % 2 == 0)

		{
			countTotal += fibTotal;
		}
	}
	printf("Problem #2: %d\n", countTotal);
}