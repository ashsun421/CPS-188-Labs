#include <stdio.h>
#include <math.h>


// Creates the user-defined function spsound 
float spsound(float tempc)
{
	// Declares variable for speed of sound at a certain temperature in ft/s, temperature in fahrenheit, and speed in km/h
	
	float fs;
	float tempf;
	float kmh;

	// Converts the temperature from degrees celcius to degrees fahrenheit 
	tempf = (tempc * (9/5) + 32);
	
	// Solve for the speed of sound in the specific temperature
	fs = 1086 * (sqrt(((5*tempf) + 297)/ 247));
	
	// Converts the speed from ft/s to km/h
	kmh = (fs * 1.09728	);
	
	// Returns the speed in km/h
	return (kmh);
	
}
	
int main(void)
{
	// Declares variables for the user inputted temperature and speed of sound 
	float temp, speed;
	
	// Program asks user to input temperature of the medium in degrees celcius
	printf("Enter the temperature in celcius: ");
	scanf("%f", &temp);
	
	// Program calculates the speed of sound in ft/s then converts to Km/h
	speed = spsound(temp);
	
	// Prints the speed of sound at the user inputted temperature
	printf("The speed of sound in this temperature is %f km/h", speed);	
	
	// Ends program
	return (0);
	
} 
