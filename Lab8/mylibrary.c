#include "mylibrary.h"

double sumdiag(double array[][10]) 
{

    // Creates temporary value for variable sum
    double sum = 0.0;

    // Creates loop to run for the length of columns and rows in the array
    for (int i = 0; i < 10; i++) 
    {

        // Adds the values at position (i,i) to sum each time the loop is ran
        sum += array[i][i];
    }

    // Returns the value for sum
    return sum;
}

double sumall(double array[][10]) 
{

    // Creates temporary value for variable sum
    double sum = 0.0;

    // Creates loop to run for the length of columns in the array
    for (int i = 0; i < 10; i++) 
    {

        // Creates loop to run for the length of rows in the array
        for (int j = 0; j < 10; j++) 
        {

            // Adds every value in the array to sum
            sum += array[i][j];
        }
    }
    
    // Returns value of sum
    return sum;
}

double avright(double array[][10]) 
{

    // Creates temporary value for variable sum
    double sum = 0.0;

    // Creates loop to run for the length of columns in the array
    for (int i = 0; i < 10; i++) 
    {

        // Adds every value in the right most column to sum
        sum += array[i][9];
    }

    // Prints the average of the values in the right most column
    return sum / 10.0;
}

double corners(double array[][10]) 
{

    // Creates temporary value for variable sum
    double sum = 0.0;

    // Adds the values at each of the  four corners of the array to each other and returns the sum
    sum += array[0][0];
    sum += array[0][9];
    sum += array[9][0]; 
    sum += array[9][9];
    return sum;
}

double largeanti(double array[][10])
 {

    // determines a temporary max value in the array
    double max = array[0][9];

    // Creates loop to run for the length of columns in the array
    for (int i = 1; i < 10; i++) 
    {

        // If the value at 9-i is greater than the temporary max it is replaced as max
        if (array[i][9-i] > max) 
        {
            max = array[i][9-i];
        }
    }

    // Returns the actual largest value in the antidiagonal
    return max;
}
