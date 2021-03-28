#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char **argv)
{
	time_t t;
	srand((unsigned) time(&t));
	
	int theNum = rand() % 21;
	int guess = -1;
	
	printf("I have a random number between 0 and 20. Can you guess the number?\n");
	
	for (int i = 5; i > 0; i--) {
		
		printf("You have %i guesses left.\n", i);
		do {
			printf("please enter a number: ");
			scanf("%i", &guess);
		} while (guess < 0 || guess > 20);
		
		if (guess == theNum) {
			printf("you have guesses correctly!\n");
			break;
		} else {
			printf("incorrect. my number is %s than %i\n", ((theNum > guess) ? "greater" : "less"), guess);
		}
	}
	
	return 0;
}
