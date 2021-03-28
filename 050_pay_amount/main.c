#include <stdio.h>

int main(int argc, char **argv)
{
	int hoursWorked = 0, overtime = 0;
	float grossPay = 0.0, nettPay = 0.0;
	float taxAmount = 0.0;
	int payRate = 12;
	
	printf("please enter hours worked: ");
	scanf("%i", &hoursWorked);
	
	overtime = hoursWorked > 40 ? hoursWorked - 40 : 0;
	hoursWorked -= overtime;
	
	grossPay = (hoursWorked * payRate) + (overtime * (payRate * 1.5));
	
	if (grossPay > 300) {
		taxAmount = 300 * 0.15;
		if (grossPay > 450) {
			taxAmount += 150 * 0.20;
			taxAmount += (grossPay - 450) * 0.25;
		} else {
			taxAmount += (grossPay - 300) * 0.20;
		}
	} else {
		taxAmount = grossPay * 0.15;
	}
	
	nettPay = grossPay - taxAmount;
	
	printf("hoursWorked: %i\n", hoursWorked);
	printf("overtime: %i\n", overtime);
	printf("grossPay: %f\n", grossPay);
	printf("taxAmount: %f\n", taxAmount);
	printf("nettPay: %f\n", nettPay);
	
	return 0;
}
