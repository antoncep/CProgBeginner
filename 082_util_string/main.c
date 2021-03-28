#include <stdio.h>
#include <string.h>

void printRev(const char text[256]);
void sortStrings(int numStrings, char strings[10][50]);

int main(int argc, char *argv[])
{
	char bufInput[256];
	int numStrings = 0;
	char strings[10][50];
	
	printf("please enter a string: ");
	scanf("%s", bufInput);
	
	printRev(bufInput);
	
	do {
		printf("please enter string count (max 10): ");
		scanf("%i", &numStrings);
	} while (numStrings < 1 || numStrings > 10);
	
	for (int i = 0; i < numStrings; i++) {
		printf("please enter a string: ");
		scanf("%s", strings[i]);
	}
	
	sortStrings(numStrings, strings);
	
	printf("\nSorted:\n");
	for (int i = 0; i < numStrings; i++) {
		printf("%s\n", strings[i]);
	}
	
	return 0;
}

void printRev(const char text[256])
{
	size_t length = strlen(text);
	
	printf("\nReverse:\n");
	for (int i = length - 1; i >= 0; i--) {
		printf("%c", text[i]);
	}
	printf("\n\n");
	
	return;
}

void sortStrings(int numStrings, char strings[10][50])
{
	char bufText[50];
	
	for (int i = 0; i < numStrings - 1; i++) {
		for (int j = i + 1; j < numStrings; j++) {
			
			if (strcmp(strings[i], strings[j]) > 0) {
				strcpy(bufText, strings[j]);
				strcpy(strings[j], strings[i]);
				strcpy(strings[i], bufText);
			}
		}
	}
	
	return;
}
