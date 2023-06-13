#include <stdio.h>

int main() {
    
    // Declare variables being used in program
    int j, i, empnum, numshift, employees;
	float rate, hours, totalhours, totalpay;
	
    // Create a array that stores all the necessary data for each employee
    int employee_data[][20] = {
        {77621, 6, 18.00, 6, 7, 5, 2, 7, 8},
		{82010, 3, 22.50, 7, 3, 6},
		{92390, 8, 19.50, 4, 8, 4, 7, 2, 7, 8, 6},
		{62396, 2, 32.00, 6, 6},
		{89320, 1, 27.50, 9},
		{19089, 7, 16.00, 5, 6, 7, 8, 9, 2, 6},
		{54209, 11, 17.00, 8, 9, 2, 5, 8, 9, 2, 5, 6, 8, 2},
		{50630, 4, 20.00, 8, 8, 8, 8}
    };
    
    // Determine size of array above 
    employees = sizeof(employee_data) / sizeof(employee_data[0]);
    
    // Print the column header
    printf("Employee Number		Total Hours	Total Pay\n");
    printf("-------------------------------------------------\n");
   
	// Create a loop that determines which values are what in the array
    for (i = 0; i < employees; i++) {
		
		// Determines the employee number by taking the first value in the data array
        empnum = employee_data[i][0];
        
        // Determines the number of shifts by taking the second value in the data array
        numshift = employee_data[i][1];
        
        // Determines the base hourly pay for the employee by taking the third value in the data array
        rate = employee_data[i][2];
        
        // Create a loop to calculate for the total hours worked
        for (j = 0; j < numshift; j++) {
			
			// Determines the hours worked by taking the fourth value adn values so on in the data array
            hours = employee_data[i][j+3];
            totalhours = totalhours + hours;
        }
        
        // If the employee has worked more than 15 hours and less than 25 hours follow this path
        if ((totalhours >= 15) &&(totalhours <= 25)){
			
			// Solve for the total pay of the employee with the premium
			totalpay = totalhours * (rate * 1.05);	
		}
		
		// if teh employee has worked more than 25 hours follow this path
		if (totalhours > 25){
			
			// Solve for the total pay of the employee with the premium
			totalpay = totalhours * (rate * 1.1);	
		}
	
		// if the employee has worked less than 15 hours follow this path
		if (totalhours < 15){
			
			// Solve for the total pay of the employee with the premium
			totalpay = totalhours * rate;
		}
		
		// Print the employee number, total hours worked and total pay in columns
        printf("%d			%0.1f 		$%0.2f\n", empnum, totalhours, totalpay);
        
        // Resets the hours worked and total pay 
        totalhours = 0;
		totalpay = 0;
	}

}
