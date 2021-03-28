#include <stdio.h>

int main(int argc, char *argv[])
{
	int numLines = 1;
	int ch = 0;
	
	FILE *fp = fopen("input.txt", "r");
	if (!fp) {
		printf("could not open file for read\n");
		return -1;
	}
	
	while ((ch = fgetc(fp)) != EOF) {
		if ((char)ch == '\n') {
			numLines++;
		}
	}
	
	printf("num lines: %i\n", numLines);
	
	fclose(fp);
	fp = NULL;
	
	return 0;
}
