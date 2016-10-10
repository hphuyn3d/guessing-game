/*
 * Hung Huynh
 * 2/3/16
 * Number guessing game. The program gets the user
 * to guess the number that the program has picked
 */
 
#include <time.h>
#include <stdlib.h>
#include <stdio.h>


int main(){
	//declaring a variable
	int n;
	char c;
	int cout = 0;
	int perfect = 0;
	
	// Welcomes the user to The Guessing Game "Guess The Number"
	printf("Welcome to Guess The Number!\n);
	printf("------------------------------------------\n");
	
	// Generates a random number between 0 and 99
	srand(time(NULL));
	do{
		int r = rand() % 100;
		printf("Guess a number between 0 and 99: ");
		do{
			scanf("%d", &n);
			if (n < r) {
				cout++;
				printf("Your guess is too low. Guess again. ")
				}
			if (n > r) {
				cout++;
				printf("Your guess is too high. Guess again. ");
		}
			if (n == r) {
				cout++;
				printf("You guessed correctly in %d tries! Congratulations! \n", cout);
				perfect = 1;
			}
		} while (perfect == 0);
		printf("\nWould You Like To Play Again? (Y|N) \n");
		getchar();
		scanf("%c", &c);
		cout = 0;
		perfect = 0;
	} while (c == 'y' || c == 'Y');
	printf("Thanks For Playing!");
	return0;
}
		
		