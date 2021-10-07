//https://www.hackerrank.com/challenges/small-triangles-large-triangles/problem


#include <stdio.h>
#include <stdlib.h>	// For malloc
#include <math.h>	// For sqrt() function i guess

// Structure for triangle
struct triangle
{
	int a;
	int b;
	int c;
};  // Don't forget the semicolon.

// Creating structure variable.
typedef struct triangle triangle;

void sort_by_area(triangle* tr, int n) // triangle* tr is
	// pointer to oth element in pointer array
{
	/* Printing Elements
	printf("%d %d %d\n", tr[0].a, tr[0].b, tr[0].c);	
	printf("%d %d %d\n", tr[1].a, tr[1].b, tr[1].c);	
	printf("%d %d %d\n\n\n", tr[2].a, tr[2].b, tr[2].c);
	*/

	float array_Perimeter[n];
	
	// array perimeter logic
	// p = (a+b+c) / 2
	for(int i = 0; i<n; i++)
	{
		array_Perimeter[i] = (tr[i].a + tr[i].b + tr[i].c)/2.0 ;
	}

	// Perimeter Calc Check
//	printf("Perimeter - %f %f %f \n\n", array_Perimeter[0], array_Perimeter[1], array_Perimeter[2]);
	
	
	// Area Calc Logic
	// S = under_root p*(p-a)*(p-b)*(p-c) Here p - parameter , a,b,c are sides of triangle
	float array_Area_Calc[n];
	for(int i = 0; i < n; i++)
	{
		float P = array_Perimeter[i];
		//sqrt of Float doesn't work well this thing saved me
		// saviour - https://www.hackerrank.com/challenges/small-triangles-large-triangles/forum   [need to look at it further]
		//array_Area_Calc[i] = sqrt(P*(P-(tr[i].a))*(P-(tr[i].b))*(P-(tr[i].c)));

		array_Area_Calc[i] = sqrt(P*(P-(tr[i].a))*(P-(tr[i].b))*(P-(tr[i].c)));
	}
	}
	
	// Area Calc Check
//	printf("Areas : > 1-%f 2-%f 3-%f\n\n", array_Area_Calc[0], array_Area_Calc[1], array_Area_Calc[2]);
		
	
	// Sorting areas and assigning order
	
	//printf("*****%d****\n", tr + 1); //Gives mem address

		
	//swapping array of areas in ascending and Triangle values swapping bubble sort used
	//Thought of many diffrent approaches for adhoc solution but have to rely or algo which is good 
	//by the way :]
	for(int i=0;i<n;i++)    
    	{
        	for(int j=0;j<(n-i-1);j++) // n-i-1 for comparing last two elements
        	{
            		if(array_Area_Calc[j] > array_Area_Calc[j+1])     
            		{
                		int temp = array_Area_Calc[j];
               			array_Area_Calc[j] = array_Area_Calc[j+1];
                		array_Area_Calc[j+1] = temp;

				// swapping logic for tr structure starts
                		temp = tr[j].a;
                		tr[j].a = tr[j+1].a;
                		tr[j+1].a = temp;
               		 	temp = tr[j].b;
                		tr[j].b = tr[j+1].b;
                		tr[j+1].b = temp;
               			temp = tr[j].c;
                		tr[j].c = tr[j+1].c;
               			tr[j+1].c = temp;
            		}
        	}
    	}


		

}

int main()
{
	int n;
	scanf("%d", &n);
	triangle *tr = malloc(n * sizeof(triangle));

	for(int i = 0; i < n; i++)
	{
		scanf("%d%d%d", &tr[i].a, &tr[i].b, &tr[i].c);
	}

	sort_by_area(tr, n);

	for(int i = 0; i<n ; i++)
	{
		printf("%d %d %d\n", tr[i].a, tr[i].b, tr[i].c);
	}

	return 0;
}


/*
 *
 *
 * Visualization --->
 *
 *   *tr |``````|
 *   	 |  0   | ---->  [7] [24] [25]
 *   	 |``````|
 *   	 |  1   | ---->  [5] [12] [13]
 *       |``````|       
 *   	 |  2   | ---->  [3] [4] [5]
 *   	 ```````
 *
 *   	 we need to access the elements and find their areas
 *   	 and then we need to switch the pointers for 
 *   	 getting it into ascending order of Area Value
 *
 *
 */

