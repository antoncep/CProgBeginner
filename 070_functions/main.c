#include <stdio.h>

float absolute(float value);
float gdc(int value1, int value2);
float sqroot(float value);

int main(int argc, char *argv[])
{
	printf("absolute of %.5f: %.5f\n", 25.0, absolute(25));
	printf("absolute of %.5f: %.5f\n", -19.0, absolute(-19));
	printf("absolute of %.5f: %.5f\n", -24.55, absolute(-24.55));
	
	printf("gdc of %i and %i: %.5f\n", 12, 24, gdc(12, 24));
	printf("gdc of %i and %i: %.5f\n", 36, 24, gdc(36, 24));
	printf("gdc of %i and %i: %.5f\n", 81, 27, gdc(81, 27));
	printf("gdc of %i and %i: %.5f\n", 256, 32, gdc(256, 32));
	
	printf("sqrt of %i: %.5f\n", 25, sqroot(25));
	printf("sqrt of %i: %.5f\n", 100, sqroot(100));
	printf("sqrt of %i: %.5f\n", 81, sqroot(81));
	printf("sqrt of %i: %.5f\n", 225, sqroot(225));
	printf("sqrt of %i: %.5f\n", 128, sqroot(128));
	printf("sqrt of %i: %.5f\n", 24, sqroot(24));
	printf("sqrt of %i: %.5f\n", 45, sqroot(45));
	
	return 0;
}

float absolute(float value)
{
	return (value < 0) ? -value : value;
}

float gdc(int value1, int value2)
{
	float temp = 0.0;
	
	while (value2) {
		temp = value2;
		value2 = value1 % value2;
		value1 = temp;
	}
	
	return value1;
}

float sqroot(float value)
{
	float result = 1.0, prev = value;
	
	if (value != absolute(value)) {
		printf("negative value");
		return -1.0;
	}
	
	while (result != prev) {
		prev = result;
		result = (result + (value / result)) / 2;
	}
	
	return result;
}
