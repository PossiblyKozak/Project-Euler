// Problem85.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "math.h"

int main()
{
	int answer = 0;
	int finalBoxes = 0;
	int borderWidth = 30;
	int borderHeight = 30;
	int numBoxes = 0;
	int numBoxesOld = 0;

	while (numBoxes < 2000000)
	{
		numBoxes = 0;
		for (int i = 1; i <= borderHeight; i++)
		{
			for (int j = 1; j <= borderWidth; j++)
			{
				for (int k = 0; k <= borderHeight - i; k++)
				{
					for (int l = 0; l <= borderWidth - j; l++)
					{
						numBoxes++;
					}
				}
			}
		}		
		borderHeight++;
	}
	finalBoxes = numBoxes;
	answer = borderHeight * borderWidth;
	while (borderHeight > borderWidth)
	{
		numBoxes = 0;
		//borderHeight = 1;
		borderWidth = 1;
		while (numBoxes < 2000000)
		{
			numBoxes = 0;
			for (int i = 1; i <= borderHeight; i++)
			{
				for (int j = 1; j <= borderWidth; j++)
				{
					for (int k = 0; k <= borderHeight - i; k++)
					{
						for (int l = 0; l <= borderWidth - j; l++)
						{
							numBoxes++;
						}
					}
				}
			}
			if (numBoxes < 2000000)
			{
				borderWidth++;
				numBoxesOld = numBoxes;
			}			
		}		
		if (abs(2000000 - numBoxes) < abs(2000000 - finalBoxes))
		{
			answer = borderHeight * borderWidth;
			finalBoxes = numBoxes;
		}
		if (abs(2000000 - numBoxesOld) < abs(2000000 - finalBoxes))
		{
			answer = borderHeight * (borderWidth - 1);
			finalBoxes = numBoxesOld;
		}
		borderHeight--;
	}
	printf("%d", answer);
    return 0;
}