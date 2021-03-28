#include <stdio.h>

int main(int argc, char **argv)
{
	int minutes = 0;
	int minsInYear = 60 * 24 * 365;
	double years = 0.0, days = 0.0;
	
	printf("please enter minutes: ");
	scanf("%i", &minutes);
	
	years = (double) minutes / minsInYear;
	days = (double) minutes / (60 * 24);
	
	printf("num years: %lf\n", years);
	printf("num days: %lf\n", days);
	
	return 0;
}
