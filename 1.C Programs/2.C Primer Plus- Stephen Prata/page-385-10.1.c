// day_mon1.c -- prints the days for each month
#include <stdio.h>
#define MONTHS 12


int main(void)
{
	const int days[MONTHS] = {31, 28,31,30,31,30,31,31,30,31,30,31};	// here const is added as month days are not supposed to be changed.
	int index;

	for (index = 0; index < MONTHS; index++)
		printf("Month %d has %2d days.\n", index + 1,
			days[index]);

	return 0;
}
