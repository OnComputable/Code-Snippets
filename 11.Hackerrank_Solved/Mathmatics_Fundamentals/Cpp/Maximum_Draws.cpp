/* ----------------------------------------------------------------------
 * File Name: Maximum_Draws.cpp
 * Purpose       : https://www.hackerrank.com/challenges/maximum-draws/problem
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
// This code wont work on g++ but it will on online ide CP

#include <bits/stdc++.h> // This may be the reason
using namespace std;

string ltrim(const string &);
string rtrim(const string &);

int maximumDraws(int n)
{
	// The sum is roughly based on
	// PigeonHole Priciple of probability
	// where if there are n pigeon and n holes
	// the probability of getting 2 pigeon 
	// in same whole will require n+1 pigeons
	// For this even probability will be one.
	// Same applies to the concept of resource allocation
	// and prevention of deadlock.
	return n+1;  // Just this inserted in code
}

int main()
{

	ofstream fout(getenv("OUTPUT_PATH"));

	string t_temp;
	getline(cin, t_temp);

	int t = stoi(ltrim(rtrim(t_temp)));

	for(int t_itr = 0; t_itr < t; t_itr++)
	{
		string n_temp;
		getline(cin,n_temp);

		int n = stoi(ltrim(rtrim(n_temp)));

		int result = maximumDraws(n);


		fout << result << "\n";
	}

	fout.close();

	return 0;
}


string ltrim(const string &str)
{
	string s(str);

	s.erase(s.begin(),find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace))));

	return s;
}


string rtrim(const string &str)
{
	string s(str);

	s.erase(s.begin(),find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace))));


	return s;
}


