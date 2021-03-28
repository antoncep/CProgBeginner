#include <stdio.h>

#define MAX_NUM 100

int main(int argc, char **argv)
{
	int arrPrimes[MAX_NUM] = { 2, 3 };
	
	for (int idx = 2; idx < MAX_NUM; idx++) {
		
		for (int i = arrPrimes[idx - 1] + 2; i <= MAX_NUM; i += 2) {
			
			int j = 1;
			while (j < idx && arrPrimes[j] > 0) {
				
				if (i % arrPrimes[j] == 0)
					break;
				j++;
			}
			if (j == idx) {
				
				arrPrimes[idx] = i;
				break;
			}
		}
	}
	exitLoops:;
	
	printf("primes:\n");
	for (int i = 0; i < MAX_NUM; i++) {
		
		printf("%i ", arrPrimes[i]);
	}
	
	return 0;
}
