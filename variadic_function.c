// #include<stdio.h>
// #include<stdarg.h>
// int sum(int count,...){
//        int sum=0;
//        va_list ptr;

//        va_start(ptr,n);
// };
// int main(){
//      int a=2,b=3,c=5;
// return 0;
// }

// C program for the above approach

#include <stdarg.h>
#include <stdio.h>

// Variadic function to add numbers
int AddNumbers(int n, ...)
{
	int Sum = 0;

	// Declaring pointer to the
	// argument list
	va_list ptr;

	// Initializing argument to the
	// list pointer
	va_start(ptr, n);

	for (int i = 0; i < n; i++)

		// Accessing current variable
		// and pointing to next one
		Sum =Sum+ va_arg(ptr, int);

	// Ending argument list traversal
	va_end(ptr);

	return Sum;
}

// Driver Code
int main()
{
	printf("\n\n Variadic functions: \n");

	// Variable number of arguments
	printf("\n 1 + 2 = %d ",
		AddNumbers(2, 1, 2));

	printf("\n 3 + 4 + 5 = %d ",
		AddNumbers(3, 3, 4, 5));

	printf("\n 6 + 7 + 8 + 9 = %d ",
		AddNumbers(5, 6, 7, 8, 9,100));

	printf("\n");

	return 0;
}
