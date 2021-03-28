#include <stdio.h>

void sqrNum(int *number);

int main(int argc, char **argv)
{
	int someNum = 5;
	
	sqrNum(&someNum);
	
	printf("after sqrNum int at address %p is: %i\n", &someNum, someNum);
	
	return 0;
}

void sqrNum(int *number)
{
	printf("int at address %p is: %i\n", number, *number);
	
	*number *= *number;
	
	return;
}
