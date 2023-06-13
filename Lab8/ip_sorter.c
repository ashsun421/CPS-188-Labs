# include <stdio.h>

// Creates the structure with an alias address_t
typedef struct 
    {
		// Creates variables representing the 4 numerical components of the ip and one representing the nickname of the computer
        int a, b, c, d;
        char name[16];

    } address_t;

// Creates a function which compares the first adn second components in the ip 
int localnet(address_t *address_1, address_t *address_2)
{
	// If the comparison is true return true
    if (address_1->a == address_2->a && address_1->b == address_2->b)
    {
        return 1;
    }
    
    // If the comparison is false return false
    else
    {
        return 0; 
    }
}

// Create the main function
int main(){

	// Create array to hold all the ip addresses and nicknames form the address_t structure
    address_t addresses[100];
    
    int num_addresses = 0;
    
    // Create a sentinel variable with all zeros and empty name to be used later
    address_t check = {0, 0, 0, 0 ,""};

	// Open the file
    FILE* file = fopen("L8_ip.txt", "r");
    
    // If nothign in file print this message
    if(file == NULL){
        perror("Error opening file");
        return 1;
    }

	// Creates a loop to determine the ip address and computer nickname in the entire file until the sentinel is read
    while(fscanf(file, "%d.%d.%d.%d %s", &addresses[num_addresses].a, &addresses[num_addresses].b, &addresses[num_addresses].c, &addresses[num_addresses].d, 
    addresses[num_addresses].name) == 5)
    {
		
		// If the sentinel is read end the loop else continue
        if(localnet(&addresses[num_addresses], &check))
        {
            break;
        }
		
		// Increase the number by 1 each time loop is run
        num_addresses++; 
    
    }
	
	// Print header
    printf("Computers that share the same locality:");
    printf("\n----------------------------------------\n");

	// Create for loop to loop through all the addresses in the file
    for (int i = 0; i < num_addresses; i++)
    {
		// Create for loop to loop through all the remaining addresses in the file
		for (int j = i + 1; j < num_addresses; j++)
		{
			// If the local net function returns true print this message
			if (localnet(&addresses[i], &addresses[j]))
				printf("%d. Servers %s and %s are on the same local network\n", i+1, addresses[i].name, addresses[j].name);
		}
            

    }   

    // Print header 
    printf("\nList of IP addresses:");
    printf("\n---------------------\n");

	// Create loop to run for the length ip addresses in the file determined from the for loop
    for (int i = 0; i < num_addresses; i++)
    {
		// Print the ip addresses along with their computer names
        printf("%d.%d.%d.%d %s\n", addresses[i].a, addresses[i].b, addresses[i].c, addresses[i].d, addresses[i].name);
    }


	// End main function
    return(0);
}
