#include <stdio.h>

int main(int argc, char **argv)
{
	double width = 0.0, height = 0.0;
	double area = 0.0, perimiter = 0.0;
	
	printf("please enter width: ");
	scanf("%lf", &width);
	
	printf("please enter height: ");
	scanf("%lf", &height);
	
	area = width * height;
	perimiter = (width + height) * 2;
	
	printf("result:\n");
	printf("width: %lf\n", width);
	printf("height: %lf\n", height);
	printf("area: %lf\n", area);
	printf("perimiter: %lf\n", perimiter);
	
	return 0;
}
