#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

enum hand{ROCK=0, PAPER, SCISSORS};

int main() {
	int pHand = -1; // Player's hand
	int cHand;	// The computer's hand
	int inpt;	// input
	srand((unsigned long)time(NULL)); // Let's seed rand() with current unix time in seconds
	while(pHand == -1){ // Loop until we receive valid input
		printf("Please choose one of the following: 1) Rock, 2) Paper or 3) Scissors\n:");
		inpt = (int)getc(stdin) - 49; // Char is converted into a integer and has the value of '1' removed
		if(inpt < 0 || inpt > 2) // If we did not receive valid input inform the player
			printf("Unknown input.\n");
		else
			pHand = inpt; // If we received valid input change the players hand to input
	}
	cHand = rand() % 3; // Get a random number in the range of 0..2
	if(pHand > cHand || (pHand == ROCK && cHand == SCISSORS)){ // 0 beats 2 and 2 beats 1 and 1 beats 0
		printf("You win!\n");
		return 0;
	} else if (pHand == cHand) { // The result is a tie if both hands are equal
		printf("Tie!\n");
		return 0;
	} else { // In the case the result is not a tie the player loses
		printf("You lose!\n");
		return 0;
	}
	return 1; // If we did not fullfill any of the conditions something went wrong
}
