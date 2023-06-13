# include <stdio.h>
# include <math.h>

int main(){
	
	// declare float variables being used in the program
	float intenA, intenB, intenC, age, rhr, mhr, thr;
	
	// declare character variables being used in the program
	char gender, fitnesslevel;

	// Get user input on their age
	printf("Please enter your age: ");
	scanf("%f", &age);
	
	// Get user input on their gender
	printf("Please enter your gender (M/F): ");
	scanf(" %c", &gender);
	
	// Get user input on their resting heart rate
	printf("Please enter your resting heart rate as of now: ");
	scanf("%f", &rhr);
	
	// Get user input on their current fitness level
	printf("Please enter your current fitness level (L, M, H): ");
	scanf(" %c", &fitnesslevel);
	
	// If the user is a male run this path
	if (gender == 'M') {
		
		// Solves for the users maximum heart rate and prints it 
		mhr = round(203.7 /( 1 + exp(0.033 * (age - 104.3))));
		
		printf("Your maximum heart rate is %0.1f bpm", mhr);
		
		// When the fitness level chosen is low the value for the fitness level is 0.55 
		if (fitnesslevel == 'L') {
		
			intenA = 0.55;
		
			// Solves for the training heart heart when the fitness level chosen is low
			thr = round((mhr - rhr) * intenA + rhr);
		
			printf("\nYour training heart rate is %0.1f bpm", thr);
			}
		
		// When the fitness level chosen is medium the value for the fitness level is 0.65 
		if (fitnesslevel == 'M') {
		
			intenB = 0.65;
		
			// Solves for the training heart heart when the fitness level chosen is medium
			thr = round((mhr - rhr) * intenB + rhr);
		
			printf("\nYour training heart is %0.1f bpm", thr);
			}
	
		// When the fitness level chosen is low the value for the fitness level is 0.8 
		if (fitnesslevel == 'H') {
		
			intenC = 0.8;
		
			// Solves for the training heart heart when the fitness level chosen is high
			thr = round((mhr - rhr) * intenC + rhr);
		
			printf("\nYour training heart rate is %0.1f bpm", thr);
	
		}
		
		
	}
	
	// If the user is a female run this path
	if (gender == 'F') {
		
		// Solves for the users maximum heart rate and prints it
		mhr = round(190.2 / (1 + exp(0.0453 * (age - 107.5))));
		
		printf("\nYour maximum heart rate is %0.1f bpm", mhr);
		
		// When the fitness level chosen is low the value for the fitness level is 0.55
		if (fitnesslevel == 'L') {
		
		intenA = 0.55;
		
		// Solves for the training heart heart when the fitness level chosen is low
		thr = round((mhr - rhr) * intenA + rhr);
		
		printf("\nYour training heart rate is %0.1f bpm", thr);
		}
		
		// When the fitness level chosen is medium the value for the fitness level is 0.65 	
		if (fitnesslevel == 'M') {
		
		intenB = 0.65;
		
		// Solves for the training heart heart when the fitness level chosen is medium
		thr = round((mhr - rhr) * intenB + rhr);
		
		printf("\nYour training heart rate is %0.1f bpm", thr);
		}
	
		// When the fitness level chosen is low the value for the fitness level is 0.8 
		if (fitnesslevel == 'H') {
		
		intenC = 0.8;
		
		// Solves for the training heart heart when the fitness level chosen is high
		thr = round((mhr - rhr) * intenC + rhr);
		
		printf("\nYour training heart is rate %0.1f bpm", thr);
	
		}
	}
		
	return (0);
	
}
	
