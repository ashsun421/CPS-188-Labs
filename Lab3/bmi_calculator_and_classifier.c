# include <stdio.h>
# include <math.h>

int main(){
	
	// Declares float variables for the height, weight and bmi of the user
	float height, weight, bmi;
	
	// Program gets user input on their weight
	printf("Please enter your weight in kilograms: ");
	scanf("%f", &weight);
	
	
	// Program gets user input on their height
	printf("Please enter your height in meters: ");
	scanf("%f", &height);
	
	// Program calculates for the bmi of the user using their height and weight
	bmi = weight / pow(height, 2);
	
	
	// If the bmi of the user is less than 18.5 follow this path
	if (bmi <= 18.5){
		
		// Print this statement if the bmi of the user is less than 18.5
		printf("Your BMI value is %0.1f, which classifies you as underweight", bmi); 
	}
	
	// If the bmi of the user is greater than 18.5 follow this path
	if (bmi > 18.5){
		
		// If the bmi of the user is less than 24.9 follow this path
		if (bmi < 24.9){
			
			// Print this statement if the bmi of the user is less than 24.9 and greater than 19.5
			printf("Your BMI value is %0.1f, which classifies you as Normal", bmi);
		}
	}
	
	// If the bmi of the user is greater than 25 follow this path
	if (bmi > 25){
		
		// If the bmi of the user is less than 29.9 follow this path
		if (bmi < 29.9){  
			
			// Print this statement if the bmi of the user is less than 29.9 and greater than 25
			printf("Your BMI value is %0.1f, which classifies you as overweight", bmi); 
		}
	}
	
	// If the bmi of the user is greater than 30 follow this path
	if (bmi >= 30){
		
		// Print this statement if the bmi of the user is greater than 30
		printf("Your BMI value is %0.1f, which classifies you as obese", bmi); 
	}
	
	return (0);
	
}
