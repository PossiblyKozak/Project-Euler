// Problem31.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int main()
{
	int penny = 1;
	int p2 = 2;
	int nickel = 5;
	int dime = 10;
	int twentyp = 20;
	int half = 50;
	int pound = 100;
	int twoPound = 200;
	int currUsed = 0;
	int count = 1;

	for (int i = 0; i <= 2; i++)
	{
		for (int j = 0; j <= 4; j++)
		{
			if (i * pound + j * half <= 200)
			{
				for (int k = 0; k <= 10; k++)
				{
					if (i * pound + j * half + k * twentyp <= 200)
					{
						for (int l = 0; l <= 20; l++)
						{
							if (i * pound + j * half + k * twentyp + l * dime <= 200)
							{
								for (int m = 0; m <= 40; m++)
								{
									if (i * pound + j * half + k * twentyp + l * dime + m * nickel <= 200)
									{
										for (int n = 0; n <= 100; n++)
										{
											if (i * pound + j * half + k * twentyp + l * dime + m * nickel + n * p2 <= 200)
											{
												for (int o = 0; o <= 200; o++)
												{
													if (i * pound + j * half + k * twentyp + l * dime + m * nickel + n * p2 + o * penny == 200)
													{
														count++;
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}

	printf("%d", count);	
    return 0;
}

