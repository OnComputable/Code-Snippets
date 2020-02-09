// mall.c -- use the Queue interface
// compile with queue.c
#include <stdio.h>
#include <stdlib.h>	// for rand() and srand()
#include <time.h>	// for time()
#include "queue.h"	// change Item typedef
#define MIN_PER_HR 60.0

bool newcustomer(double x);	// is there a new customer?
Item customertime(long when);	// set customer parameters

int main(void)
{
	Queue line;	
	Item temp;	// new customer data
	int hours;	// hours of simulation
	int perhour;	// average # of arrivals per hour
	long cycle, cyclelimit;	// loop counter, limit
	long turnaway = 0;	// turned away by full queue
	long customers = 0;	// joined the queue
	long served = 0;	// served during the simulation
	long sum_line = 0;	// cumulative line length
	int wait_time = 0;	// time until Sigmund is free
	double min_per_cust;	// average time between arrivals
	long line_wait = 0;	// cumulative time in line

	InitializeQueue(&line);
	srand((unsigned int) time(0));	// random initializing of rand()
	puts("Case study: Sigmund Lander's Advice Booth");
	puts("Enter the number of simulation hours:");
	scanf("%d", &hours);
	cyclelimit = MIN_PER_HR * hours;
	puts("Enter the average number of customers per hour:");
	scanf("%d", &perhour);

	min_per_cust = MIN_PER_HR / perhour;

	for

	return 0;
}
