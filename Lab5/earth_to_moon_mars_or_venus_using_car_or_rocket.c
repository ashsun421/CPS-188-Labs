# include <stdio.h>

// Creates a user defined function to solve for the max and min time to travel from earth to the moon
float earth_to_moon(int speed, float* mintime, float* maxtime){

	// Declares the moon perigee and apogee
	int moon_perigee = 363105;
	int moon_apogee = 405696;
	
	// solves for the min time by dividing the moon perigee by the speed the person is moving at
	*mintime = moon_perigee / speed;
	
	// solves for the max time by dividing the moon apogee by the speed the person is moving at
	*maxtime = moon_apogee / speed;
	
	// Ends the user defined function
	return(0);
	
}

// Creates a user defined function to solve for the max and min time to travel from earth to mars
float earth_to_mars(int speed, float* mintime, float* maxtime){
	
	// Declares mars perigee and apogee
	int mars_perigee = 54600000;
	int mars_apogee = 401000000;
	
	// solves for the min time by dividing the mars perigee by the speed the person is moving at
	*mintime = mars_perigee / speed;
	
	// solves for the max time by dividing the mars apogee by the speed the person is moving at
	*maxtime = mars_apogee / speed;
	
	// Ends the user defined function
	return(0);
	
}

// Creates a user defined function to solve for the max and min time to travel from earth to venus
float earth_to_venus(int speed, float* mintime, float* maxtime){

	// Declares venus perigee and apogee
	int venus_perigee = 38000000;
	int venus_apogee = 261000000;
	
	// solves for the min time by dividing the venus perigee by the speed the person is moving at
	*mintime = venus_perigee / speed;
	
	// solves for the max time by dividing the venus apogee by the speed the person is moving at
	*maxtime = venus_apogee / speed;
	
	// Ends the user defined function
	return(0);
	
}

// Main function is created
int main(){
	
	// Declares varaibles for the speed, option chosen, maxtime and mintime
	int option, speed;
	float mintime, maxtime;
	
	// Prints a menu with options to choose
	printf("1. Traveling to the Moon\n2. Traveling to Mars\n3. Traveling to Venus\n4. Exit program."); 
	
	// Asks the user to input the option they want
	printf("\nPlease enter your option (1, 2, 3 or 4): ");
	scanf("%d", &option);
	
	// If the user enter 4 for the option number program ends
	if (option == 4){
		
		// Prints a statement to show the program has ended
		printf("Program terminated");
		
		// Ends program
		return(0);
	}
	
	// Asks user to enter the speed they are travelling at
	printf("Enter speed that you are travelling at (Car: 100 km/h or Rocket: 400 km/h): ");
	scanf("%d", &speed);
	
	
	// While the option chosenis not 4 this loop runs
	while (option != 4){
		
		// If the option chosen is 1 follow this path
		if (option == 1){
			
			// Calls the earth to moon function and solves for max and min time using speed entered
			earth_to_moon(speed, &mintime, &maxtime);
			
			// Prints the max and min time in hours
			printf("\nMinimum travel time to moon: %0.2f hours\nMaximum travel time to moon: %0.2f hours\n", mintime, maxtime);
		}

		// If the option chosen is 2 follow this path
		else if (option == 2){
			
			// Calls the earth to mars function and solves for max and min time using speed entered
			earth_to_mars(speed, &mintime, &maxtime);
			
			// Prints the max and min time in hours
			printf("\nMinimum travel time to mars: %0.2f hours\nMaximum travel time to mars: %0.2f hours\n", mintime, maxtime);
		}
	
		// If the option chosen is 3 follow this path	
		else if (option == 3){
			
			// Calls the earth to venus function and solves for max and min time using speed entered
			earth_to_venus(speed, &mintime, &maxtime);
			
			// Prints the max and min time in hours
			printf("\nMinimum travel time to venus: %0.2f hours\nMaximum travel time to venus: %0.2f hurs\n", mintime, maxtime);
		}
		
		// If the option chosen is 4 follow this path	
		else if (option == 4){
			
			// Prints statement before ending program
			printf("Program terminated");
			
			// Ends the program
			break;
		}
		
		// Prints a menu with options to choose
		printf("\n1. Traveling to the Moon\n2. Traveling to Mars\n3. Traveling to Venus\n4. Exit program."); 
	
		// Asks the user to input the option they want
		printf("\nPlease enter your option (1, 2, 3 or 4): ");
		scanf("%d", &option);
		
		// If the option chosen is 4 follow this path to end program
		if (option == 4){
			
			// Prints statement before ending program
			printf("Program terminated");
			
			// Ends the program
			return(0);
		}
		
		// Asks user to enter the speed they are travelling at
		printf("Enter speed that you are travelling at (km/h): ");
		scanf("%d", &speed);

	}
	
}
