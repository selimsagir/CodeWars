#include <stdlib.h>
#include <stdio.h>
#include <time.h>

// Game status
enum Status {CONTINUE, WON, LOST};
//prototype
int rollDice(void);


void main()
{
	// randomize random number generator using current time
	srand(time(NULL));

	int myPoint;
	enum Status gameStatus; // Can contain continue, won or lost
	int sum = rollDice();

	switch (sum)
	{
		case 7:
		case 11:
			gameStatus = WON;
			break;
		case 2:
		case 3  :
		case 12:
			gameStatus = LOST;
			break;
		default:
			gameStatus = CONTINUE;
			myPoint = sum;
			printf("Point is %d\n", myPoint);
			break;
	}
	while (CONTINUE == gameStatus){
		sum = rollDice;

		if (sum == myPoint){
        gameStatus = WON;
    }
		else {
			if (7 == sum) {
				gameStatus == LOST;
			}
		}

	}
	if (gameStatus == WON) {
		puts("Player won");
	}
	else {
		puts("Player lost :(");
	}

}

int rollDice(void)
{

	int die1 = 1 + (rand() % 6);
	int die2 = 1 + (rand() % 6);

	printf("Player rolled %d + %d = %d", die1, die2, die1 + die2);
	return die1 + die2;
}
