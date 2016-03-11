#include <stdarg.h>

/*
OVERVIEW: 	A school has unknown number of students. Write a function that takes a variable number of arguments representing student marks in english
and returns the number of students who scored > 90 marks.
E.g.: variableArguments(3, 20, 90, 98) returns 1. One value (98) is greater than 90.

INPUTS: 	First argument is number (arg_count) of student marks followed by "arg_count" number of arguments.
E.g.: If first argument to function is 5, total number of arguments to function will be 6 (1 + 5).

OUTPUT: 	Returns the number of students who scored > 90 marks.

ERROR CASES:

NOTES: 		use stdarg.h header.
*/

int variableArguments(int arg_count, ...)
{
	va_list arg_ptr;

	int count = 0, i;
	va_start(arg_ptr, arg_count); // initializes the arg_ptr with the arg_count

	if (arg_count <= 0)//Exceptional CASES
	{
		return 0;
	}
	for (i = 0; i<arg_count; i++)
	{
      if (va_arg(arg_ptr, int) > 90) // iterates the next arguments in to arg_ptr of data_type int
		{
			count++;
		}
	}va_end(arg_ptr);
	return count;	
}