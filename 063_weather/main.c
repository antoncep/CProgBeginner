#include <stdio.h>

#define MONTHS 12
#define YEARS 5

int main(int argc, char **argv)
{
	float rainTable[5][MONTHS] = {
		{4.3,4.3,4.3,3.0,2.0,1.2,0.2,0.2,0.4,2.4,3.5,6.6},
		{8.5,8.2,1.2,1.6,2.4,0.0,5.2,0.9,0.3,0.9,1.4,7.3},
		{9.1,8.5,6.7,4.3,2.1,0.8,0.2,0.2,1.1,2.3,6.1,8.4},
		{7.2,9.9,8.4,3.3,1.2,0.8,0.4,0.0,0.6,1.7,4.3,6.2},
		{7.6,5.6,3.8,2.8,3.8,0.2,0.0,0.0,0.0,1.3,2.6,5.2},
	};
	float yearAvg = 0.0, yearTot = 0.0, mnthTot = 0.0;
	
	printf("rainfall:\n");
	printf("year\trainfall (inches):\n");
	for (int i = 0; i < YEARS; i++, yearTot = 0.0) {
		for (int j = 0; j < MONTHS; j++) {
			
			yearTot += (float)rainTable[i][j];
		}
		yearAvg += yearTot;
		
		printf("201%i\t%5.1f\n", i, yearTot);
	}
	yearAvg /= YEARS;
	
	printf("yearly avg: %.1f\n\n", yearAvg);
	
	printf("monthly avg:\n");
	printf("Jan\tFeb\tMar\tApr\tMay\tJun\tJul\tAug\tSep\tOct\tNov\tDec\n");
	for (int i = 0; i < MONTHS; i++, mnthTot = 0) {
		for (int j = 0; j < YEARS; j++) {
			
			mnthTot += (float)rainTable[j][i];
		}
		printf("%.1f\t", (mnthTot / YEARS));
	}
	
	return 0;
}
