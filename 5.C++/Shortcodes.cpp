int width( 5 );

//list initialization
int width{ 5 };  // This direct form is generally preferred.
int height = { 6 };


//list initialization to 0
int width{};


// identifier naming best practices

int value;

int my_variable_name;

int my_function_name();

int myVariableName;
int myFunctionName();

int x{2};	// initialize variable x with value 2
int y{ 2 + 3 }; // initialize variable y with value 5
int z{ (2*3) + 4 };	// initialize variable z with value 10
int w{ y };	// initialize variable w with value 5 (the current value of variable y)


someFunction( a(), b());	// a() or b() may be called first

int avar{ a() };	// a() will always be called first
int bvar{ b() };	// b() will always be called second
someFunction(avar, bvar);	// it doesn't matter whether avar or bvar are copied first because they are just values


int add(int x, int y)	// function parameters x and y are local variables
{
	int z{ x + y };	// z is a local variable too

	return z;
}

