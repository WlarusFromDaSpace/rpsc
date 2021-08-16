#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

enum hand{ROCK=0, PAPER, SCISSORS};

int main() {
	int pHand = -1;
	int cHand;
	int inpt;
	srand((unsigned long)time(NULL));
	while(pHand == -1){
		printf("Please choose one of the following: 1) Rock, 2) Paper or 3) Scissors\n:");
		inpt = (int)getc(stdin) - 49;
		if(inpt < 0 || inpt > 2)
			printf("Unknown input.\n");
		else
			pHand = inpt;
	}
	cHand = rand() % 3;
	if(pHand > cHand || (pHand == ROCK && cHand == SCISSORS)){
		printf("You win!\n");
		return 0;
	} else if (pHand == cHand) {
		printf("Tie!\n");
		return 0;
	} else {
		printf("You lose!\n");
		return 0;
	}
	return 1;
}

