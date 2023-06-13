# include <stdio.h>
# include <math.h>

int main() {
	
	// Declares variables being used in the program
	int i, n;
	float quiz[10], a, b, avgquiz, midterm, final, percentmid, percentfinal, finalmark;
	
	// Creates a for loop that runs 10 times in order to get all 10 quiz marks and then stores in an array
	for (i = 0; i < 10; i++) {
		
		// Program gets user input on the quiz marks
		printf("Please enter your 10 quiz marks (1-10): ");
		
		scanf("%f", &quiz[i]);
	}
	
	// Program gets user input on the midterm exam mark
	printf("Please enter your midterm exam mark (0-100): ");
	scanf("%f", &midterm);
	
	// Program gets user input on the final exam mark
	printf("Please enter your final exam mark (0-100): ");
	scanf("%f", &final);
	
	// Program sorts list in ascending order and removes the lowest quiz mark
	for (i = 0; i < 10; i++) {
		for (n = i + 1; n < 10; n++) {
			if (quiz[i] > quiz[n]){
				a = quiz[i];
				quiz[i] = quiz[n];
				quiz[n] = a;
			}
		}
	}
	
	// Program sums up the 9 quiz marks
	for (i = 1; i < 10; i++) {
		b = b + quiz[i];
	}
	
	// Program solves for the average of the 9 quiz marks
	avgquiz = b/9;
	
	// If the midterm mark is less than or equal to the final exam mark follow this path
	if (midterm >= final) {
		
		percentmid = 0.35;
		percentfinal = 0.4;
	}
	
	// If the final exam mark is greater than the midterm mark follow this path
	else if (final > midterm) {
		
		percentmid = 0.25;
		percentfinal = 0.5;
	}
	
	// Program solves for the final mark
	finalmark = ((final * percentfinal) + (midterm * percentmid) + (avgquiz * 0.25 * 10));
	
	// Program outputs the final mark
	printf("Your final mark is: %0.2f percent", finalmark);
	return 0;
	 
		

}
