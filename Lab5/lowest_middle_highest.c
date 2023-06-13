# include <stdio.h>

// Creates a user defined function to find the highest, lowest and middle value number
int ascend(int a, int b, int c, int* highest, int* middle, int* lowest){
	
	
	// If the value for a is larger than the values for b and c follow this path
	if (a >= b && a >= c){
		
		// Sets value for a as the highest
		*highest = a;
		
		// If the value for b is greater than c follow this path
		if (b >= c){
			
			// Sets value for b as middle and c as lowest
			*middle = b;
			*lowest = c;
		}
		
		// If the value for c is greater than b follow this path
		if (c >= b){
			
			// Sets value for c as middle and b as lowest
			*middle = c;
			*lowest = b;
		}
	}
	
	// If the value for b is larger than the values for a and c follow this path
	else if (b >= a && b >= c){
		
		// Sets value for b as the highest
		*highest = b;
		
		// If the value for a is greater than c follow this path
		if (a >= c){
			
			// Sets value for a as middle and c as lowest
			*middle = a;
			*lowest = c;
		}
		
		// If the value for c is greater than a follow this path
		if (c >= a){
			
			// Sets value for c as middle and a as lowest
			*middle = c;
			*lowest = a;
		}
	}
	
	// If the value for c is larger than the values for a and b follow this path
	else if (c >= b && c >= a){
		
		// Sets value for c as the highest
		*highest = c;
		
		// If the value for a is greater than b follow this path
		if (a >= b){
			
			// Sets value for a as middle and b as lowest
			*middle = a;
			*lowest = b;
		}
		
		// If the value for b is greater than a follow this path
		if (b >= a){
			
			// Sets value for b as middle and a as lowest
			*middle = b;
			*lowest = a;
		}
	}
	
	// Ends the user defined function
	return(0);
}

// Creates the main function
int main() {
	
	// Declares values for the three user inputted numbers, the highest number, the middle number and the lowest number
	int num1, num2, num3, highest, middle, lowest;

	// Gets user input on three integer values
	printf("Enter three integer values: ");
	scanf("%d %d %d", &num1, &num2, &num3);
	
	// Calls the ascend function to determine while numbers are the lowest middle and highest
	ascend(num1, num2, num3, &highest, &middle, &lowest);
	
	// Prints the numbers in order of lowest, middle and highest
	printf("\n%d %d %d", lowest, middle, highest);
	
}
