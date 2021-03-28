#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	char *ipString = NULL;
	
	ipString = (char*)malloc(51 * sizeof(char));
	
	if (!ipString) {
		printf("could not allocate memory!\n");
		return 11;
	}
	
	printf("please enter a string: ");
	scanf("%s", ipString);
	
	printf("you entered: %s\n", ipString);
	
	free(ipString);
	ipString = NULL;
	
	return 0;
}
