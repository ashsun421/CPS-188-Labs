#include <stdio.h>

int main()
{
    // Opens data file containing three lines of data
    FILE *file;
    file = fopen("values.txt", "r");
    
    // Creates a variable for the amount of numbers in each line of the data file
    int count;
    
    //Creates variables for the minimum and maximum range numbers, the maximum amount of numbers allowed to be in the list of numbers and the list of normalized numbers
    float min, max, numbers[20], norm[100];
    
    // Creates a for loop that runs once for each line of data
    for (int i = 0; i < 3; i++) 
    {
        // Prints out headers for the chart
        printf("Original Values\t\tNormalized Values\n");
        printf("---------------\t\t-----------------\n");
        
        // Scans the data file for the count, minimum range value and max range value
        fscanf(file, "%d %f %f", &count, &min, &max);
        
        // Creates a for loop based on the value of the count
        for (int i = 0; i < count; i++) 
        {
            
            // Finds the numbers and places them in a list
            fscanf(file,"%f", &numbers[i]);  
        }
        
        // Creates variables to set the highest and lowest value in the list 
        float low = numbers[0], high = numbers[0]; 
        
        // Creates a loop based on the value of the count
        for (int i = 0; i < count; i++) 
        {
            
            // Finds the lowest and highest value in the list of numbers
            if (numbers[i] < low) 
            {
                low = numbers[i];
            }
            else if(numbers[i] > high) 
            {
                high = numbers[i];
            }
        }
        
        
        // Creates a for loop based on the value of the count
        for (int i = 0; i < count; i++) 
        {
            
            // Solves for each normalized number in the list
            norm[i] = (min + (numbers[i] - low) * (max - min)) / (high - low);
            
            // Prints out the orginal values and the normalized values in a chart
            printf("%.2f\t\t\t%.2f\n", numbers[i], norm[i]);
        }
        printf("\n\n");
    }
    
    // Closes file
    fclose(file);
    return 0;

}
