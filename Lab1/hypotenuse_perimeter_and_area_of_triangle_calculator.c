#include <stdio.h>
#include <math.h>

int main() {

	// Declares the variables being used in program
	float sidea;
	float sideb;
	float hypotenuse;
	float perimeter;
	float area;
	
	// Collects user input on what the length of the sides are
	printf("Enter side a: ");
	scanf("%f", &sidea);
	
	printf("\nEnter side b: ");
	scanf("%f", &sideb);
	
	// Solves for what the hypotenuse (side c) of the triangle is
	hypotenuse = sqrt(pow(sidea,2) + pow(sideb,2));
	printf("\nThe hypotenuse is: %.2f", hypotenuse);

	// Program solves for perimeter and area
	perimeter = sidea + sideb + hypotenuse;
	area = 0.5*sidea*sideb;
		
	// Prints out the perimeter and area of triangle rounded to two decimal places
	printf("\nThe perimeter of the triangle is: %.2f",perimeter);

	printf("\nThe area is: %.2f", area);	

return 0;

}
