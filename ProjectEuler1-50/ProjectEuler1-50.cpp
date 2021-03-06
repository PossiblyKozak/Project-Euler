// ProjectEuler1-50.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Solutions.h"
#include "conio.h"

void oneThrough10()
{
	printf("Problem #1: %d\n", Problem1());
	printf("Problem #2: %d\n", Problem2());
	printf("Problem #3: %0.0f\n", Problem3());
	printf("Problem #4: %d\n", Problem4());
	printf("Problem #5: %d\n", Problem5());
	printf("Problem #6: %d\n", Problem6());
	printf("Problem #7: %d\n", Problem7());
	printf("Problem #8: %0.0f\n", Problem8());
	printf("Problem #9: %d\n", Problem9());
	printf("Problem #10: %0.0f\n", Problem10());
}

void elevenThrough20()
{
	printf("Problem #11: %d\n", Problem11());
	printf("Problem #12: %d\n", Problem12());
	printf("Problem #13: %0.0f\n", Problem13());
	printf("Problem #14: %d\n", Problem14());
	printf("Problem #15: %0.0f\n", Problem15());
	printf("Problem #16: %d\n", Problem16());
	printf("Problem #17: %d\n", Problem17());
	//printf("Problem #18: %0.0f\n", Problem8());
	//printf("Problem #19: %d\n", Problem9());
	//printf("Problem #20: %0.0f\n", Problem10());
}

int main()
{
	bool displayTrue = true;
	while (displayTrue)
	{
		printf("print the group of 10 answers you would like to calculate ( 1 - 5 )\nPress x to break\n");
		switch (_getch())
		{
		case '1':
		{
			oneThrough10();
			break;
		}
		case '2':
		{
			elevenThrough20();
			break;
		}
		case 'x':
		{
			displayTrue = false;
		}
		}
	}

    return 0;
}

