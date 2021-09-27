/* ----------------------------------------------------------------------
 * File Name: Find_the_Point.cpp
 * Purpose       : https://www.hackerrank.com/challenges/find-point/problem?isFullScreen=false
 * Creation Date :27-09-21
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

//************The Header file seems to be causing problem
//I'll look into this later on as I have not used this header
//till now and as it's not a standard header I don't think
//g++ has it or has it in a different way don't know



#include <bits/stdc++.h> // it contains all include libraries:<
// Use when problems are time sensitive
// Not part of standard c++ therefor avoid in software engg.
using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &); // Vector is like an array
// But it can grow or shrink dynamically :>


// main logic of the code
vector<int> findPoint(int px, int py, int qx, int qy)
{
	vector<int> points(2);

	// Modified midpoint formula
	// to get the coordinates of x and y
	int rx = 2*qx - px;  
	int ry = 2*qy - py;

	points[0] = rx;
	points[1] = ry;
	return points;
}

int main()
{
	ofstream fout(getenv("OUTPUT_PATH")); // Does i/o operations on file using buffers.
	
	string n_temp; // String object to store input in n_temp
	getline(cin, n_temp); // getline a string method for input

	// input for cases
	int n = stoi(ltrim(rtrim(n_temp))); // Converts String to integer ltrim -- rtrim are function are described below.

	// iterating loop
	for(int n_itr = 0; n_itr < n; n_itr++)
	{
		string first_multiple_input_temp; // string var :<
		getline(cin,first_multiple_input_temp); // getting number of inputs cases (p1 p2 q1 q2 , p1 p2 q1 q2)

		vector<string> first_multiple_input = split(rtrim(first_multiple_input_temp)); // (p1 p2 q1 q2) input

		int px = stoi(first_multiple_input[0]); // p1
	
		int py = stoi(first_multiple_input[1]); // p2
	
		int qx = stoi(first_multiple_input[3]); // q1
	
		int qy = stoi(first_multiple_input[4]); // q2
		
		// Let the function do its work
		// to find out reflection points for both cases.
		vector<int> result = findPoint(px, py, qx, qy);

		// Iterating over the result (r1 r2) 
		for(size_t i = 0; i < result.size(); i++)
		{
			fout << result[i];

			if(i != result.size() - 1)
			{
				fout << " ";
			}
		}
		fout << "\n";
	
	}

	fout.close();


	return 0;
}

// Trimming input from left
string ltrim(const string &str)
{
	string s(str);
	// Deletes elements from the list contained
	s.erase(s.begin(), s.end(), not1(ptr_fun<int, int> (isspace)));

	return s;
}


// Trimming input from right
string rtrim(const string &str)
{
	string s(str);

	s.erase(s.rbegin(), s.rend(), not1(ptr_fun<int, int> (isspace))).base();
	s.end();

	return s;
}


// String splitting and storing using vector
vector<string> split(const string &str)
{
	vector<string> tokens; // tokennization technique 
	// nothing but splitting string using common delimiter

	string::size_type start = 0;
	string::size_type end = 0;

	while((end = str.find(" ", start)) != string::npos)
	{
		tokens.push_back(str.substr(start, end - start));

		start = end + 1;
	}
	// operation on vector tokens.
	tokens.push_back(str.substr(start));

	// returning token to main function.
	return tokens;
}
