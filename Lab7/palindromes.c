#include <stdio.h>
#include <ctype.h>
#include <string.h>

// Function Prototypes for the clean and reverse function
void clean(char before[], char after[]);
void reverse(char before[], char after[]);

// Creates the clean function
void clean(char before[], char after[]) 
{
    int j = 0;
    
    // Loops through each character in the original string
    for (int i = 0; before[i] != '\0'; i++) 
    {
		
		// If the character in the string is a part of the alphabet or a number, add it to a new string
        if (isalnum(before[i])) 
        {
			// Convert all the uppercase letters in the new string to lowercase
            after[j] = tolower(before[i]);
            j++;
        }
    }
    // Add null character at the end of the new string
    after[j] = '\0';
}

// Creates the reverse function
void reverse(char before[], char after[]) 
{
	
	// creates a variable to represent the length of the cleaned string
    int len = strlen(before);
    
    // If the string is empty set the new string to empty as well
    if (len == 0) 
    {
        after[0] = '\0';
        return;
    } 
	
	// If the string is not empty follow this path
    else 
    {
		
		// Call the reverse function recursively with the substring starting from the second character
        reverse(&before[1], after);
        int i = strlen(after);
        after[i] = before[0];
        after[i + 1] = '\0';
	}
}

int main()
{
	// Declare variables for the original string, cleaned string and reversed string
	char word[100], cleaned[100], reversed[100];
	printf("Please enter a sentence: ");
	
	// Get user input on the string 
	fgets(word, sizeof(word), stdin);
	
	// Print out the original string
	printf("\nOriginal string: %s\n", word);
	
	// Clean the original string
	clean(word, cleaned);
	
	// Print out the cleaned string
	printf("Cleaned string: %s", cleaned);
	
	// Reverse the cleaned string
	reverse(cleaned, reversed);
	
	// Print out the reversed string
	printf("\nReversed string: %s\n", reversed);
	
	// If the reversed string has the same order of characters as the cleaned string follow this path
	if(strcmp(cleaned, reversed) == 0)
	{
		printf("\nThe string is a palindrome");
	}
	
	// If the reversed string does not have the same order of characters as the cleaned string follow this path
	else
	{
		printf("\nThe string is not a palindrome");
	}
	return(0);
}
