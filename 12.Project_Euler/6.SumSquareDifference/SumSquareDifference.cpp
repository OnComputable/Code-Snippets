/* ----------------------------------------------------------------------
 * File Name: SumSquareDifference.cpp
 * Purpose       :
 * Creation Date :07-10-21
 * Modified Date :
 * Created By    : Swiss
 * ----------------------------------------------------------------------
 * VIM Commands : 1) To open multiple files in tab without exiting->
 * 		   :tabedit Path_or_filename(if in same folder)
 * 		  2) To switch between tabs -> gt (in visual mode)
 * ----------------------------------------------------------------------
 * Cpp Commands : 1) g++-9 -std=c++17 -Wall -Weffc++ -Wextra 
 *		     -Wsign-conversion -Werro FileName.cpp
 * ----------------------------------------------------------------------
*/

// need to compiler progam
// as - g++ programname -lm     as math.h is present

#include <iostream>
#include <math.h>
using namespace std;

int main(void)
{	
	int Difference, SumOfSquare = 0, SquareOfSum = 0;

	for(int i = 1; i <101; i++)
	{
		SumOfSquare += pow(i,2);
		SquareOfSum += i;
	}

	SquareOfSum = pow(SquareOfSum, 2);

	if(SquareOfSum > SumOfSquare)
	{
		Difference = SquareOfSum - SumOfSquare;
	}
	else
	{
		Difference = SumOfSquare - SquareOfSum;
	}

	cout << Difference << "\n\n";

	return 0;
}
