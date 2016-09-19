#include <lib.h>
#include <stdio.h>
#include <quantum_left.h>

/*  This function calls the new system call get_ticks_left */

void main(void)
{
	

	int N = 7;
	int i = 0;
	int j = 0;
	int M = 5;
	const int X = M*N;
	int * array = calloc(X, sizeof(int));
	int * index = array;
	
	//int buffer[X] = {0};
	for (i = 0; i < N; i++)
		{
		printf( "Time Remaining: ");
		for (j = 0; j < M; j++) {
   		 *index = (int)quantum_left(); // or whatever value
    		printf("%d", *index );
		if(j != (M-1)) printf(", ");
		index++;
		
	}
		printf( "\n");
		}
	printf( "Our first get_ticks_remaining value is: ");
	printf("%d", *array);  // This points back to the first integer stored in the entire array
	printf("\n");		  // Thus, I can now print the entire dynamically allocated buffer from the start again, if I wish
	printf(" This shows that we can now print the entire buffer again, if we chose to make a loop and iterate over the buffer. \n");
}