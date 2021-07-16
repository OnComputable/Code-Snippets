/* ----------------------------------------------------------------------
 * File Name: Class_Implementation.cpp
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

class item
{
	int number;
	float cost;

	public:
	void getdata(int a, float b);

	void putdata(void)
	{
		cout << "number :" << number << "\n";
		cout << "cost :" << cost << "\n";
	}
};

void item :: getdata(int a, float b)
{
	number = a;
	cost = b;
}

int main()
{
	item x;

	cout << "\nobject x" << "\n";

	x.getdata(100, 299.95);
	x.putdata();

	item y;

	cout << "\nobject y" << "\n";

	y.getdata(200, 175.50);
	y.putdata();

	return 0;
}
