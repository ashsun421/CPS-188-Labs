#include <stdio.h>

// Include the user defined library
#include "mylibrary.h"

int main()
{
	// Create a 10 x 10 array
	double array[10][10];
	
	// Open the text file
	FILE *file = fopen("L8_real.txt", "r");

	// If the file is empty print this message
	if (file == NULL)
	{
		printf("Error opening file");
		return 1;
	}

	// Create a loop that runs 10 times for the columns of the array
	for (int i = 0; i < 10; i++)
	{	
		// Create a loop that runs 10 times for the rows of the array
		for (int j = 0; j < 10; j++)
		{
			// Scans in the values from the text file into the array
			fscanf(file, "%lf", &array[i][j]);
		}
	}

	// Closes file
	fclose(file);
	
	// Calls the functions from the user defined library and gets the necessary values
	double sumdiag_answer = sumdiag(array);
	double sumall_answer = sumall(array);
	double avright_answer = avright(array);
	double corners_answer = corners(array);
	double largeanti_answer = largeanti(array);

	// Creates and opens a new binary file and writes the following in it
	file = fopen("results.bin", "wb");
	if (file == NULL)
	{
		printf("Error opening file");
		return 1;
	}

	// Writes the sum of the main diagonal in binary to the binary file
	fwrite(&sumdiag_answer, sizeof(double), 1, file); 

	// Writes the sum of all numbers in binary to the binary file
	fwrite(&sumall_answer, sizeof(double), 1, file); 

	// Writes the average of the right most column in binary to the binary file
	fwrite(&avright_answer, sizeof(double), 1, file); 

	// Writes the sum of the four corners in the array in binary to the binary file
	fwrite(&corners_answer, sizeof(double), 1, file); 

	// Write the largest number in the antidiagonal in binary to the binary file
	fwrite(&largeanti_answer, sizeof(double), 1, file); 	

	// Opens the newly written binary file and reads the values in it
	file = fopen("results.bin", "rb");

	// Reads the sum of the main diagonal from the binary file into decimal
	fread(&sumdiag_answer, sizeof(double), 1, file); 

	// Reads the sum of all numbers from the binary file into decima
	fread(&sumall_answer, sizeof(double), 1, file); 

	// Reads the average of the right most column from the binary file into decima
	fread(&avright_answer, sizeof(double), 1, file); 

	// Reads the sum of the four corners in the array from the binary file into decima
	fread(&corners_answer, sizeof(double), 1, file); 

	// Reads the largest number in the antidiagonal from the binary file into decima
	fread(&largeanti_answer, sizeof(double), 1, file); 

	// Closes the file
	fclose(file);
	
	// Prints the decimal value for the sum of the main diagonal
	printf("\n\nThe sum of the main diagonal is: %0.1lf", sumdiag_answer);

	// Prints the decimal value for the sum of all numbers 
	printf("\nThe sum of all elements: %0.1lf", sumall_answer);

	// Prints the decimal value for the average of the rightmost column
	printf("\nThe average of the rightmost column: %0.1lf", avright_answer);

	// Prints the decimal value for the sum of the four corners
	printf("\nThe sum of the four corners: %0.1lf", corners_answer);

	// Prints the decimal value of the largest number in the antidiagonal
	printf("\nThe largest elements in the antidiagonal is: %0.1lf", largeanti_answer);

	// End program
	return(0);

}
