/* ----------------------------------------------------------------------
 * File Name: 1.MyTry.cpp
 * Purpose       :
 * Creation Date :08-10-21
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

#include <iostream>
using namespace std;

int main()
{
	// Size of array and sum required is taken input
	int n,x;	// n - Number of elements in array , x - Required Sum for passing the condn 
	cin >> n >> x;	
	int array[n];	// Array for elements
	int arrayI[n], arrayJ[n];	// array for pairs used two just for challenge :3

	int count;	// Count var counts the pair numbers and passes value to above array accordingly.

	// array element as input is taken.
	for(int i = 0; i < n; i++)
	{
		cin >> array[i];
	}

	// Iterating for each element with it's precedding element if
	// it produces 'x' as it's sum we store that pair in resultant array.
	// for each element we progress the number of comparison is reduced by one
	// i.e. (n-1) for 1st
	// (n-2) for 2nd
	// :
	// :
	// (n-n) for last element
	for(int i = 0; i <n; i++)
	{
		for(int j = i+1; j<= n ; j++)
		{
			if((array[i] + array[j]) == x)
			{
				for(int k = count; k <= count; k++)
				{
					arrayI[k] = array[i];
					arrayJ[k] = array[j];	
				}
				count++;
			}

		}
	}


	// printing if possible pair exists
	if(count > 0)
	{
		cout << "\n\nValid Pair Exists\n";
		for(int i = 0; i < count; i++)
		{
			cout << "( " << arrayI[i] << ","<< arrayJ[i] << " )" << endl;
		}
	}
	else
	{
		cout << "No such pair exists!!!" << endl;
	}



	return 0;
}




/* Tested Output --- 
 (pawan:1)-(Size-32K:Files-3)
> ./a.out
5 -2
0 -1 2 -3 1


Valid Pair Exists
( -3,1 )
(pawan:1)-(Size-32K:Files-3)
> ./a.out
5 0
1 -2 1 0 5
No such pair exists!!!
(pawan:1)-(Size-32K:Files-3)
>
*/
