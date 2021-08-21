/* ----------------------------------------------------------------------
 * File Name: Nesting_of_Member_Fuctions.cpp
 * Purpose       :
 * Creation Date :17-07-21
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

class set
{
	int m,n;
	public:
		void input(void);
		void display(void);
		int largest(void);
};

int set :: largest(void)
{
	if(m >= n)
		return(m);
	else
		return(n);
}

void set :: input(void)
{
	cout << "Input values of m and n" << "\n";
	cin >> m >> n;
}

void set :: display(void)
{
	cout << "Largest value = " << largest() << "\n";
}

int main()
{
	set A;
	A.input();
	A.display();


	return 0;
}
