/* ----------------------------------------------------------------------
 * File Name: Use_Of_Manipulators.cpp
 * Purpose       :
 * Creation Date :15-07-21
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
#include <iomanip>

using namespace std;

int main()
{
	int Basic = 950, Allowance = 95, Total = 1045;

	cout << setw(10) << "Basic" << setw(10) << Basic << endl << setw(10) << "Allowance" << setw(10) << Allowance <<endl << setw(10) << "Total" << setw(10) << Total << endl;

	return 0;
}
