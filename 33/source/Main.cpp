#include <stdio.h>
#include <stdlib.h>

float miles, CostPerLiter,MilesPerLiter, ParkingFees, tolls,totalcost;

int main(void) {
	printf("This APP will calculate your daily driving cost.\n");
	printf("Please enter total miles(km) driven per day:");
	scanf_s("%f",&miles);
	printf("\nPlease enter cost per liter of gasoline:");
	scanf_s("%f", &CostPerLiter);
	printf("\nPlease enter average miles per liter:");
	scanf_s("%f", &MilesPerLiter);
	printf("\nPlease enter parking fees per day:");
	scanf_s("%f", &ParkingFees);
	printf("\nPlease enter tolls per day:");
	scanf_s("%f", &tolls);

	totalcost = miles / MilesPerLiter * CostPerLiter + ParkingFees + tolls;
	printf("\nYour cost per day of driving to work is %1.f$\n",totalcost);

	system("pause");
	return 0;
}