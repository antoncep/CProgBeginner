#include <stdio.h>

int strLength(const char *string);

int main(int argc, char **argv)
{
	char someString[] = "I have some chars here to count";
	
	printf("string: \"%s\"\n", someString);
	printf("length: %i\n", strLength(someString));
	
	return 0;
}

int strLength(const char *string)
{
	const char *stringEnd = string;
	
	while (*stringEnd) {
		stringEnd++;
	}
	
	return (stringEnd - string);
}
