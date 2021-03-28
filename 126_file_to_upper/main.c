#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define FILENAME "input.txt"

int main(int argc, char *argv[])
{
	char ch;
	
	FILE *fpRead = fopen(FILENAME, "r");
	if (!fpRead) {
		printf("could not open file for read\n");
		return -1;
	}
	
	FILE *fpWrite = fopen("temp"FILENAME, "w");
	if (!fpWrite) {
		printf("could not open file for write\n");
		return -1;
	}
	
	while ((ch = fgetc(fpRead)) != EOF) {
		if (islower(ch))
			ch = toupper(ch);
		fputc(ch, fpWrite);
	}
	fclose(fpWrite);
	fpWrite = NULL;
	fclose(fpRead);
	fpRead = NULL;
	
	remove(FILENAME);
	rename("temp"FILENAME, FILENAME);
	
	fpRead = fopen(FILENAME, "r");
	if (!fpRead) {
		printf("could not open file for read\n");
		return -1;
	}
	
	printf("content:\n");
	while ((ch = fgetc(fpRead)) != EOF) {
		printf("%c", ch);
	}
	
	fclose(fpRead);
	fpRead = NULL;
	
	return 0;
}
