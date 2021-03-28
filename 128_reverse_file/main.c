#include <stdio.h>

#define FILENAME "input.txt"

int main(int argc, char *argv[])
{
	char ch;
	
	FILE *fp = fopen(FILENAME, "r");
	if (!fp) {
		printf("could not open file for read\n");
		return 10;
	}
	
	fseek(fp, -1, SEEK_END);
	while ( (ftell(fp) > 0) && ((ch = fgetc(fp)) != EOF) ) {
		printf("%c", ch);
		fseek(fp, -2, SEEK_CUR);
	}
	if ((ch = fgetc(fp)) != EOF) {
		printf("%c", ch);
	}
	
	fclose(fp);
	fp = NULL;
	
	return 0;
}
