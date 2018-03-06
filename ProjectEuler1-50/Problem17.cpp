/*
Alex Kozak
March 4th 2018

If the numbers 1 to 5 are written out in words: one, two, three, four, five, then there are 3 + 3 + 5 + 4 + 4 = 19 letters used in total.

If all the numbers from 1 to 1000 (one thousand) inclusive were written out in words, how many letters would be used?

*/

#include "Solutions.h"
#include "stdafx.h"
#include "math.h"

int Problem17()
{
	int answer = 0;

	int currentAnalyze[4] = { 0, 0, 0, 0 };

	int ones126 = 3;
	int ones459 = 4;
	int ones378 = 5;
	
	int teens12 = 6;
	int teens56 = 7;
	int teens3489 = 8;
	int teens7 = 9;

	int tens1 = 3;
	int tens456 = 5;
	int tens2389 = 6;
	int tens7 = 7;

	int hundred = 7;

	int thousand = 8;

	for (int i = 1; i <= 1000; i++)
	{
		int currentAdd = 0;
		currentAnalyze[3]++;
		for (int j = 3; j >= 0; j--)
		{
			if (currentAnalyze[j] == 10)
			{
				currentAnalyze[j] = 0;
				currentAnalyze[j - 1]++;
			}
		}

		if (currentAnalyze[0] == 1)
			currentAdd += thousand + ones126;
		
		switch (currentAnalyze[1])
		{
		case 1:
		case 2:
		case 6:
			currentAdd += hundred + ones126;
			break;
		case 4:
		case 5:
		case 9:
			currentAdd += hundred + ones459;
			break;
		case 3:
		case 7:
		case 8:
			currentAdd += hundred + ones378;
			break;
		}		

		if (currentAnalyze[1] != 0 && (currentAnalyze[2] != 0 || currentAnalyze[3] != 0))
		{
			currentAdd += 3;
		}

		switch (currentAnalyze[2])
		{
		case 1:
			switch (currentAnalyze[3])
			{
			case 1:
			case 2:
				currentAdd += teens12;
				break;
			case 5:
			case 6:
				currentAdd += teens56;
				break;
			case 3:
			case 4:
			case 8:
			case 9: 
				currentAdd += teens3489;
				break;
			case 7:
				currentAdd += teens7;
				break;
			case 0:
				currentAdd += tens1;
			}
			break;
		case 4:
		case 5:
		case 6:			
			currentAdd += tens456;
			break;
		case 2:
		case 3:		
		case 8:
		case 9:
			currentAdd += tens7;
			break;
		case 7:
			currentAdd += tens7;
			break;
		}

		if (currentAnalyze[2] != 1)
		{
			switch (currentAnalyze[3])
			{
			case 1:
			case 2:
			case 6:
				currentAdd += ones126;
				break;
			case 4:
			case 5:
			case 9:
				currentAdd += ones459;
				break;
			case 3:
			case 7:
			case 8:
				currentAdd += ones378;
				break;
			}
		}
		printf("%d - %d\n", i, currentAdd);
		answer += currentAdd;
	}

	return answer;
}