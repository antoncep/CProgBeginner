#include <stdio.h>
#include <stddef.h>

int main(int argc, char **argv)
{
	int someNum = 15;
	int *numPoint = &someNum;
	
	printf("address of someNum: %p\n", &someNum);
	printf("address of pointer: %p\n", &numPoint);
	printf("pointer value: %p\n", numPoint);
	printf("pointer pointed val: %i\n", *numPoint);
	printf("sizeof pointer: %lu\n", sizeof (numPoint));
	printf("sizeof pointer: %lu\n", sizeof (int*));
	
	return 0;
}
