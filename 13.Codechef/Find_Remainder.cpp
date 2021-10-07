/* ----------------------------------------------------------------------
 * File Name: Find_Remainder.cpp
 * Purpose       :
 * Creation Date :30-09-21
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

	int T,A,B;
	int result[T];
	cin >> T;
	
	for(int i = 0; i < T; i++)
	{
		cin >> A >> B;
		result[i] = (A%B);
	}

	for(int i = 0; i < T; i++)
	{
		cout << result[i] << "\n";
	}

	return 0;
}

