#include <stdio.h>

int main(int argc, char ** argv)
{
	printf("int bytes: %lu\n", (sizeof (int)));
	printf("float bytes: %lu\n", (sizeof (float)));
	printf("doublebytes: %lu\n", (sizeof (double)));
	printf("long int bytes: %lu\n", (sizeof (long int)));
	printf("char bytes: %lu\n", (sizeof (char)));
	printf("long bytes: %lu\n", (sizeof (long)));
	printf("long long bytes: %lu\n", (sizeof (long long)));
	printf("long double bytes: %lu\n", (sizeof (long double)));
	printf("char* bytes: %lu\n", (sizeof (char*)));
	printf("int* bytes: %lu\n", (sizeof (int*)));
	printf("void* bytes: %lu\n", (sizeof (void*)));
	
	return 0;
}
