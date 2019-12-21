// Que 1.c

#include <stdio.h>
#define MONTHS 12	// number of months in a year
#define YEARS	5	// number of years of data

int main(void)
{
	// initializing rainfall data for 2010 - 2014
	const float rain[YEARS][MONTHS] = {
		{4.3,4.3,4.3,3.0,2.0,1.2,0.2,0.2,0.4,2.4,3.5,6.6},
		{4.3,4.3,4.3,3.0,2.0,1.2,0.2,0.2,0.4,2.4,3.5,6.6},
		{4.3,4.3,4.3,3.0,2.0,1.2,0.2,0.2,0.4,2.4,3.5,6.6},
		{4.3,4.3,4.3,3.0,2.0,1.2,0.2,0.2,0.4,2.4,3.5,6.6},
		{4.3,4.3,4.3,3.0,2.0,1.2,0.2,0.2,0.4,2.4,3.5,6.6}
	};

	float subtot, total;

	// declare pointers
	const float (*year_ptr)[MONTHS];
	const float *month_ptr;

	printf(" YEAR RAINFALL (inches)\n");
	for (year_ptr = rain, total = 0; year_ptr < rain + YEARS; year_ptr++)
	{
		// for each year, sum rainfall for each month
		for (month_ptr = *year_ptr, subtot = 0; month_ptr < *year_ptr + MONTHS; month_ptr++)
			subtot += *month_ptr;

		printf("%5d %15.1f\n", (int) (2010 + (year_ptr - rain)), subtot);
		total += subtot;	// total for all years
	}

	printf("\nThe yearly average is %.1f inches.\n\n", total/YEARS);

	printf("MONTHLY AVERAGE:\n\n");
	printf(" Jan Feb Mar Apr May Jun jul Aug Sep Oct ");
	printf("Nov Dec\n");

	int month, year;

	for (month = 0; month < MONTHS; month++)
	{
		// for each month, sum rainfall over years
		for (year = 0, subtot = 0; year < YEARS; year++)
			subtot += *(*(rain + year) + month);
		printf("%4.1f", subtot/YEARS);
	}

	printf("\n");

	return 0;
}
