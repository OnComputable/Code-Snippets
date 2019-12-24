// Que 12.c
// faulty code need to be fixed

#include <stdio.h>
#define MONTHS 12	// number of months in a year
#define YEARS	5	// number of years of data

void print_annual_average(int years, int months, const float data[years][months]);
void print_monthly_average(int years, int months, const float data[years][months]);

void print_annual_average(int years, int months, const float data[years][months])
{
	float subtotal, total;

	printf(" YEAR RAINFALL (inches)\n");

	for (int year = 0, total = 0; year < years; year++)
	{
		// for each year, sum rainfall for each month
		for (int month = 0, subtotal = 0; month < months; month++)
			subtotal += data[year][month];

		printf("%5d %15.1f\n", 2010 + year, subtotal);
		total += subtotal;	// total for all years
	}
	printf("\nThe yearly average is %.1f inches.\n\n", total/years);
}

void print_monthly_average(int years, int months, const float data[years][months])
{
	float subtotal;

	printf("MONTHLY AVERAGES:\n\n");
	printf(" Jan Feb Mar Apr May Jun Jul Aug Sep Oct ");
	printf(" Nov Dec\n");

	for (int month = 0; month < months; month++)
	{
		// for each month, sum rainfall over years
		for (int year = 0, subtotal = 0; year < years; year++)
		{
			subtotal += data[year][month];
		}
		printf("%4.1f ", subtotal/YEARS);
	}
	printf("\n");

}

int main(void)
{
	// initializing rainfall data for 2010 - 2014
	const float rain[YEARS][MONTHS] = {{4.3,4.3,4.3,3.0,2.0,1.2,0.2,0.4,2.4,3.5,6.6},
						{7.6,5.6,3.8,2.8,3.8,0.2,0.0,0.0,0.0,1.3,2.6,5.2},
						{7.6,5.6,3.8,2.8,3.8,0.2,0.0,0.0,0.0,1.3,2.6,5.2},
						{7.6,5.6,3.8,2.8,3.8,0.2,0.0,0.0,0.0,1.3,2.6,5.2},
						{7.6,5.6,3.8,2.8,3.8,0.2,0.0,0.0,0.0,1.3,2.6,5.2}};

	print_annual_average(YEARS, MONTHS, rain);
	print_monthly_average(YEARS, MONTHS, rain);

	return 0;
}