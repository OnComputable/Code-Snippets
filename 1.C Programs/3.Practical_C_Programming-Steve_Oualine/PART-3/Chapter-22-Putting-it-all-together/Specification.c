/*		Preliminary Specification for a
		C Statistics Gathering Program
			Steve Oualine
		      February 10, 1996

The program stat gathers statistics about C soruce files and prints them. The
command line is:

	stat <files..>
Where <files..> is a list of source files. The following shows the output of
the program on a short test file.

[File: stat/stat.out]

*/

/*******************************************************
 *  Name: Calculator (Version 2).			   *
 *							   *
 * Purpose:						   *
 *	    Act like a simple four-function calculator.	   *
 *							   *
 * Usage:						   *
 *	    Run the program.				   *
 *	    Type in an operator (+ - * /) and a number.	   *
 *	    The operation will be performed on the current *
 *	    result, and a new result will be displayed.	   *
 *							   *
 *	    Type 'Q' to quit.				   *
 *							   *
 * Notes: Like version 1 but written with a switch	   *
 *	    statement.					   *
 *******************************************************/
 #include <stdio.h>
 char line[100];	// line of text from input

 int result;	// the result of the calculations
 char operator;	// operator the user specified
 int value;	// value specified after the operator

 int main()
{
	result = 0;	// initilize the result

	// loop forever (or until break reached)
	while (1) {
		printf("Result: %d\n", result);
		printf("Enter operator and number: ");

		fgets(line, sizeof(line), stdin);
		sscanf(line, "%c %d", &operator, &value);

		if ((operator == 'q') || (operator == 'Q'))
			break;
		switch (operator) {
			case '+':
				result += value;
				break;
			case '-':
				result -= value;
				break;
			case '*':
				result *= value;
				break;
			case '/':
				if (value == 0) {
					printf("Error: Divide by zero\n");
					printf("    operation ignored\n");
				} else
					result /= value;
				break;
			default:
				printf("Unknown operator %c\n", operator);
				break;
			
		}
	}

	return (0);
}
 
