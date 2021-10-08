/* ----------------------------------------------------------------------
 * File Name: 2.StringStream.cpp
 * Purpose       :https://www.hackerrank.com/challenges/c-tutorial-stringstream/problem
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
#include <sstream>
#include <vector>
#include <iostream>

using namespace std;

vector<int> parseInts(string str)
{
	vector<int> ReturnVal = ss
}

int main()
{
	string str;
	cin >> str;
	vector<int> integers = parseInts(str);

	for(int i = 0; i < integers.size(); i++)
	{
		cout << integers[i] << "\n";
	}

	return 0;
}

