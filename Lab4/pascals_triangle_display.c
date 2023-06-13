# include <stdio.h>
int main()
{
	// Declare variables for the loops, values in each row and how many rows there are
	int i, j, value, rows = 9;
	
	// Create first loop so that it loops for however many rows there are
	for (i = 0; i < rows; i++){
		
		// Create second loop that loops to print the values in each row
		for(j = 0; j <= i; j++){
			
			// If the value being found is in the first row print 1
			if(i == 0 || j == 0)
				value = 1;
			
			// If the value being found is in any row other than the first row follow this path
			else
				// Solve for the values in each row
				value = value * (i - j + 1) / j;
			
			// Prints the the values in the row
			printf("%d ", value);
			
			}
		// Prints the next row on a new line
		printf("\n");
	}
	
}
