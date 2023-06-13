#include <stdio.h>

	int main() {
		
		// Declare variables being used
		float initialp = 50, initialt = 300, maxp = 500, maxt, p2, temp = 173.15;
		
		// Solve for the final/max temperature the gas can be 
		maxt = (maxp * initialt) / initialp;
		
		// Print the headers
		printf("Temperature (K)		Pressure(atm)\n");
		printf("--------------		-------------\n");
	   
	   // Creates a loop that runs until the pressure reaches the maximum pressure and temperature reaches the maximum temperature
		while (p2 <= maxp && temp <= maxt){
			
			// Adds 100 kelvin onto the temperature once per each loop
			temp = temp + 100;
			
			// Solves for the pressure at the specific temperature
			p2 = (initialp * temp) / initialt;
		
			// If the pressure being solved is greater than then max pressure follow this path
			if (p2 >= maxp){
				
				// Print kaboom as the cylinder explodes
				printf("Kaboom!");
			}
			
			// Else follow this path
			else{
				
				// Print the temperature and pressure in column format
				printf("%0.2f			%0.2f\n", temp, p2);
			}

		}	
	}
