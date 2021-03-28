#include <stdio.h>

int strLength(const char string[]);
void strConcat(char result[], const char str1[], const char str2[]);

int main(int argc, char *argv[])
{
	char someString[] = "this is some string";
	char name[35];
	char surname[] = " sillyname";
	char fullname[70];
	
	printf("string \"%s\" has %i chars\n", someString, strLength(someString));
	
	printf("please enter a name: ");
	scanf("%s", name);
	
	strConcat(fullname, name, surname);
	
	printf("hello %s", fullname);
	
	
	return 0;
}

int strLength(const char string[])
{
	int length = 0;
	
	while (string[length]) {
		length++;
	}
	
	return (length - 1);
}

void strConcat(char result[], const char str1[], const char str2[])
{
	int i = 0, end = 0;
	
	while (str1[i]) {
		result[end] = str1[i];
		i++;
		end++;
	}
	
	i = 0;
	while (str2[i]) {
		result[end] = str2[i];
		i++;
		end++;
	}
	
	result[end] = '\0';
	
	return;
}
