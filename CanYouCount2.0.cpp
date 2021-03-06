// CanYouCount.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdlib.h"
#include "stdio.h"
#include "time.h"


int main()
{
	int tryAgain = 1;
	printf("::::Can You Count?::::\n\n");

	while (tryAgain == 1)
	{
		int gameMode, counterTime, startTime, endTime, timePassed;

		printf("What game mode would you like to play?\n1: 10 seconds\n2: 25 seconds\n3: 50 seconds\n4: 100 seconds\n");
		scanf_s("%d", &gameMode);

		switch (gameMode)
		{
		case 1: counterTime = 10;
			break;
		case 2: counterTime = 25;
			break;
		case 3: counterTime = 50;
			break;
		case 4: counterTime = 100;
			break;
		default: printf("Please enter a valid response\n");
		}

		printf("\nCan you count to %d?\nPress enter to begin, then press enter again after you think %d seconds have passed.\n", counterTime, counterTime);
		getchar();
		getchar();
		printf("Timer has begun.");
		startTime = time(NULL);
		getchar();
		endTime = time(NULL);
		timePassed = endTime - startTime;

		if (timePassed > counterTime)
		{
			printf("You were too late! %d seconds had passed\n", timePassed);
		}
		else if (timePassed < counterTime)
		{
			printf("You were too early! Only %d seconds had passed\n", timePassed);
		}
		else if (timePassed = counterTime)
			printf("Yes! You got it!\n");

		printf("\nWould you like to try again?\n1: Yes\n2: No\n");
		scanf_s("%d", &tryAgain);
		printf("\n");
	}

	return 0;
}